0x11. C - printf

Background Context
Write your own printf function.

Requirements

General
1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
9. The prototypes of all your functions should be included in your header file called main.h
10. Don’t forget to push your header file
11. All your header files should be include guarded
12. Note that we will not provide the _putchar function for this project

GitHub
There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%.



 
TASK 0.
I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
mandatory

Write a function that produces output according to a format.

1. Prototype: int _printf(const char *format, ...);
2. Returns: the number of characters printed (excluding the null byte used to end output to strings)
3. write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
	c
	s
	%
4. You don’t have to reproduce the buffer handling of the C library printf function
5. You don’t have to handle the flag characters
6. You don’t have to handle field width
7. You don’t have to handle precision
8. You don’t have to handle the length modifiers


TASK 1.
1. Education is when you read the fine print. Experience is what you get if you don't
mandatory
Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
