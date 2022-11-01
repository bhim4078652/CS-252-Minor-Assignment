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
