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
