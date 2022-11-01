#include<stdio.h> // library for standard input output operations.
#include<stdlib.h>// library for dynamic memory allocation.
#include<unistd.h>// library for critical datatypes.
#include<pthread.h>// library for managing Pthreads.

int n;

// below function calculates average and returns the average value as void pointer.
void *average(void *p)
{
	float *result=(float *)malloc(sizeof(float));	
	int *arr=(int *)p;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	
	(*result)=(float)sum/n;
	
	//printf("The average value is:%f",average);
	return (void *)result;
}

// below function calculates minimum in the array and returns the  value as void pointer.
void *min(void *p)
{
	int *result=(int *)malloc(sizeof(int));	
	int *arr=(int *)p;
	int temp=arr[0];
	for(int i=1;i<n;i++)
	{
		if(temp>arr[i])
		{
			temp=arr[i];
		}
	}
	
	(*result)=temp;
	//printf("\nThe Minimum  value is:=%d",temp);
	
	return (void *)result;

}

// below function calculates maximum in the array and returns the  value as void pointer.
void *max(void *p)
{
	int *result=(int *)malloc(sizeof(int));	
	int *arr=(int *)p;
	int temp=arr[0];
	for(int i=1;i<n;i++)
	{
		if(temp<arr[i])
		{
			temp=arr[i];
		}
	}
	(*result)=temp;
	//printf("\nThe Maximum  value is:=%d\n",temp);
	
	return (void *)result;
}

int main()
{
	
	float *result1;
	
	int *result2;
	int *result3;
	
	printf("enter the array size :="); // size of the array
	scanf("%d",&n);
	
	int *arr=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	// creating three threads one for average ,one for maximum and another for minimum calculation in the array.
	pthread_t t1; 
	pthread_t t2;
	pthread_t t3;
	
	// failure in creation of thread returns 0 as the return value
	if(pthread_create(&t1,NULL,&average,(void *)arr))
	{
		return 1;
	}
	
	if(pthread_create(&t2,NULL,&min,(void *)arr))
	{
		return 2;
	}
	
	if(pthread_create(&t3,NULL,&max,(void *)arr))
	{
		return 3;
	}
	
	// thread_join is same as wait system call which waits for particulat thread to complete its execution.
	pthread_join(t1,(void **)(&result1));
    pthread_join(t2,(void **)(&result2));
    pthread_join(t3,(void **)(&result3));
	
	// printing the results
	printf("The average value is:%f\n",*result1);
	printf("The minimum value is:%d\n",*result2);
	printf("The maximum value is:%d\n",*result3);
	
	// deallocating the dynamic memory used
	free(arr);
	free(result1);
	free(result2);
	free(result3);
	
	return 0;
}

