#include <stdio.h>  // library for standard input output operations.
#include <sys/types.h> // library which contains implementation of fork system call.
#include <unistd.h> // library which helps in defining datatype pid_t.
#include <sys/wait.h> //library for wait system call.

int main()
{
	int k=0; 
	pid_t pid; 

// variable pid of datatype pid_t which is used to store returned value from from fork system call.

// reading non negative integer from user
	do
	{
		printf("Please enter a number greater than 0 to run the Collatz Conjecture.\n"); 
  		scanf("%d", &k);	
	}while (k <= 0);
	
/*fork system call is used to create child process, here we are creating child processes to calculate and 
  print the  collatz conjecture*/

	pid = fork();
	
	// if os fails to create child process then -1 is returned by fork system call

	if(pid==-1)
	{
		printf("failed to create child process\n");
	}
	
	/* child process will be assigned pid variable value to zero and parent process will get pid value which 
	   is nothing but process id of child process. */

	else if (pid == 0)
	{

		// below is the algorithm for implemetation of Collatz Conjecture problem.
		printf("Child is working...\n");
		printf("%d\n",k);
		while (k!=1)
		{
			if (k%2 == 0)
			{
				k = k/2;
			}
			
			else if (k%2 == 1)
			{
				k = 3 * (k) + 1;
			}	
			
			
			printf("%d\n",k);
		}
		
		
		printf("Child process is done.\n");
	}
	
	
	else
	{
		/* this section will be only entered by parent process hence will call wait system call
		   so that child process can finish it job first and then parent continues. */
		   
		printf("Parents is waiting on child process...\n");
		wait(NULL);
		printf("Parent process is done.\n");
	}
	
	return 0; 
}
