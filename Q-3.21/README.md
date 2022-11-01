# Q 3.21 Solution

Note: All the information written below is specific to Ubuntu operating system


## Requirements
Ubuntu operating system and GCC compiler to compile the C code.

[Steps to install GCC compiler on Ubuntu](https://linuxize.com/post/how-to-install-gcc-compiler-on-ubuntu-18-04/#installing-gcc-on-ubuntu)

## Steps to run the programs

### sourcecode.c
 - Open the terminal and navigate to the directory where the file **sourcecode.c** is present
-  gcc sourcecode.c
- ./a.out


**Output**

 ![App Screenshot](https://github.com/bhim4078652/CS-252-Minor-Assignment/blob/main/Q-3.21/3.21%20os%20assignment.png)

## Implementation
- This C program creates child process and this child process is responsible for printing the Collatz Conjecture sequence .
- In linux os fork() system call is used to create child process.
- Once the parent process calls fork() system call then parents wait for child process to complete the work assigned by calling wait(NULL) system call.
- This code is applicable only for non negative integers as input.

## About fork() system call
-Fork system call is used for creating a new process, which is called child process, which runs concurrently with the process that makes the fork() call (parent process). After a new child process is created, both processes will execute the next instruction following the fork() system call.
-A child process uses the same pc(program counter), same CPU registers, same open files which use in the parent process.

-It takes no parameters and returns an integer value. 
- Negative Value: creation of a child process was unsuccessful.
- Zero: Returned to the newly created child process.
- Positive value: Returned to parent or caller. The value contains process ID of newly created child process.

## About wait() system call
A call to wait() blocks the calling process until one of its child processes exits or a signal is received. After child process terminates, parent continues its execution after wait system call instruction. 

Child process may terminate due to any of these: 
- It calls exit();
- It returns (an int) from main
- It receives a signal (from the OS or another process) whose default action is to terminate.

![App Screenshot](https://github.com/bhim4078652/CS-252-Minor-Assignment/blob/main/Q-3.21/pic%202.png)
