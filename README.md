# CS-252-Minor-Assignment

The assignment consists of two questions from the exercise section of the 10th edition of Operating
System Concepts by Abraham Silberschatz, Peter Baer Galvin and Greg Gagne.

## Questions
**[Question 1: Chapter 3- 3.21](https://github.com/bhim4078652/CS-252-Minor-Assignment/tree/main/Q-3.21)**


The Collatz conjecture concerns what happens when we take any positive integer n and apply the following algorithm: 
     n= n∕2, if n is even and 
     n= 3 × n + 1, if n is odd.


The conjecture states that when this algorithm is continually applied,
all positive integers will eventually reach 1. For example, if n = 35, the
sequence is
35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1
Write a C program using the fork() system call that generates this
sequence in the child process. The starting number will be provided
from the command line. For example, if 8 is passed as a parameter on
the command line, the child process will output 8, 4, 2, 1. Because the
parent and child processes have their own copies of the data, it will be
necessary for the child to output the sequence. Have the parent invoke
the wait() call to wait for the child process to complete before exiting
the program. Perform necessary error checking to ensure that a positive
integer is passed on the command line.


**[Question 2: Chapter 4- 4.22](https://github.com/bhim4078652/CS-252-Minor-Assignment/tree/main/Q-4.22)**

Write a multithreaded program that calculates various statistical values
for a list of numbers. This program will be passed a series of numbers
on the command line and will then create three separate worker threads.
One thread will determine the average of the numbers, the second will
determine the maximum value, and the third will determine the minimum value. For example, suppose your program is passed the integers
90 81 78 95 79 72 85
The program will report
The average value is 82
The minimum value is 72
The maximum value is 95
The variables representing the average, minimum, and maximum values
will be stored globally. The worker threads will set these values, and
the parent thread will output the values once the workers have exited.
(We could obviously expand this program by creating additional threads
that determine other statistical values, such as median and standard
deviation.)


## Author(s)
Bhimaraddy B Y - 201EC170
