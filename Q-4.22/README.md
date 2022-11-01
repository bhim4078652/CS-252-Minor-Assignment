# Q 4.22 Solution 

Note: All the information written below is specific to Ubuntu operating system


## Requirements
Ubuntu operating system and GCC compiler to compile the C code.

[Steps to install GCC compiler on Ubuntu](https://linuxize.com/post/how-to-install-gcc-compiler-on-ubuntu-18-04/#installing-gcc-on-ubuntu)

## Steps to run the programs

### sourcecode.c
 - Open the terminal and navigate to the directory where the file **sourcecode.c** is present
-  gcc -pthread sourcecode.c
- ./a.out


## Output

 ![App Screenshot](https://github.com/bhim4078652/CS-252-Minor-Assignment/blob/main/Q-4.22/4.22%20pic%201.png)

## Implementation
- This C code creates 3 threads ,one for calculating average , one for calculating minimum and last one for calculating maximum in the array.
- Time taken to execute will be smaller compared to serial program because the 3 threads can be assigned to different cores and parallely results can be computed.
- To create threads use pthread_create system call and to finally join we will use pthread_join system call.

## About pthread_create system call
- pthread_create: used to create a new threads.
- int pthread_create(pthread_t * thread, 
                   const pthread_attr_t * attr, 
                   void * (*start_routine)(void *), 
                   void *arg);
- thread: pointer to an unsigned integer value that returns the thread id of the thread created.
- attr: pointer to a structure that is used to define thread attributes like detached state, scheduling policy, stack address, etc. Set to NULL for default thread attributes.
- start_routine:sub routine address on which the thread will operate.
- arg: pointer to void that contains the arguments to the function defined in the earlier argument
- returns 0 if thread is sucessfully created else returns non zero numbers.

## About pthread_join system call
- pthread_join: used to wait for the termination of a thread.
- int pthread_join(pthread_t th, void **thread_return);
- th: thread id of the thread for which the current thread waits.
- thread_return: pointer to the location where the exit status of the thread mentioned in th is stored.


## Inference
- when we have large amount of numbers(million typically) then we can observe that time taken by threaded process will take less time compared to non threaded process.
- If the amount of numbers are small (100 typically) then we cannot observe much significant change time of execution because the thread creation and maintance will contribute more towards the total execution time.

##  Reference(s)
- https://gist.github.com/Jabiribn/e58bf13c678953891900e5f982b48037
- https://www.geeksforgeeks.org/thread-functions-in-c-c/
- https://man7.org/linux/man-pages/man3/pthread_create.3.html
- https://man7.org/linux/man-pages/man3/pthread_join.3.html
- https://github.com/sankronaldo/CS-252-OS-Assignment
idea to begin with is taken from first link in this refernces.
