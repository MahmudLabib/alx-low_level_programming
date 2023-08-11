# Alx Low Level Programming

Welcome to the my Low Level Programming repository! This repository contains a collection of C programming projects that cover fundamental concepts and skills in low-level programming. The projects are designed to provide hands-on experience with various aspects of C programming and system-level development.

## Table of Contents

- [C - Hello, World](#c-hello-world)
- [General](#general)
- [Requirements](#requirements)
- [0-preprocessor: Preprocessor](#0-preprocessor-preprocessor)
- [1-compiler: Compiler](#1-compiler-compiler)
- [2-assembler: Assembler](#2-assembler-assembler)
- [3-name: Name](#3-name-name)
- [4-puts.c: Hello, puts](#4-putsc-hello-puts)
- [5-printf.c: Hello, printf](#5-printfc-hello-printf)
- [6-size.c: Size is not grandeur, and territory does not make a nation](#6-sizec-size-is-not-grandeur-and-territory-does-not-make-a-nation)
- [100-intel: Intel](#100-intel-intel)
- [101-quote.c: UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity](#101-quotec-unix-is-basically-a-simple-operating-system-but-you-have-to-be-a-genius-to-understand-the-simplicity)

## C - Hello, World

This project introduces you to the basic "Hello, World" program in the C programming language. You will learn about the structure of a C program, how to compile and execute it, and the usage of simple output functions like `puts` and `printf`.

## General

This section covers general information about C programming and the concepts you will encounter throughout the projects in this repository.

- Why C programming is awesome
- Introduction to key figures in the programming world: Dennis Ritchie, Brian Kernighan, and Linus Torvalds
- Understanding the compilation process with `gcc`
- Exploring the entry point and `main` function
- Printing text using `printf`, `puts`, and `putchar`
- Calculating the size of data types using `sizeof`
- Compilation using `gcc` and the default program name
- Adhering to the Holberton C coding style with `betty-style`
- Finding the right headers for standard library functions
- Influence of the `main` function on program return value

## Requirements

Here are the requirements for working on the projects in this repository:

- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 14.04 LTS using gcc 4.8.4
- Files should end with a new line
- A `README.md` file at the root of the repository with a description
- Follow the Betty coding style
- No compilation errors or warnings
- No use of the `system` function
- Usage of `-Wall` gcc option for compiling without warnings


## Project Details

### 0-preprocessor: Preprocessor

A script that runs a C file through the preprocessor and saves the result into another file. The C file name is saved in the variable `$CFILE`, and the output is saved in the file `c` using the command `gcc $CFILE -E -o c`.

### 1-compiler: Compiler

A script that compiles a C file but does not link. The C file name is saved in the variable `$CFILE`, and the output file is named the same as the C file but with the extension `.o` instead of `.c`. Example: if the C file is `main.c`, the output file should be `main.o` using the command `gcc -c $CFILE`.

### 2-assembler: Assembler

A script that generates the assembly code of a C code and saves it in an output file. The C file name is saved in the variable `$CFILE`, and the output file is named the same as the C file but with the extension `.s` instead of `.c`. Example: if the C file is `main.c`, the output file should be `main.s` using the command `gcc -S $CFILE`.

### 3-name: Name

A script that compiles a C file and creates an executable named `cisfun`. The C file name is saved in the variable `$CFILE` using the command `gcc $CFILE -o cisfun`.

### 4-puts.c: Hello, puts

A C program that prints exactly "Programming is like building a multilingual puzzle," followed by a new line. The `puts` function is used; `printf` is not allowed. The program should end with the value `0`.

```c
#include <stdio.h>

int main(void) {
    puts("Programming is like building a multilingual puzzle\n");
    return (0);
}
```

### 5-printf.c: Hello, printf

A C program that prints exactly "with proper grammar, but the outcome is a piece of art," followed by a new line. The `printf` function is used; `puts` is not allowed. The program should return `0`.

```c
#include <stdio.h>

int main(void) {
    printf("with proper grammar, but the outcome is a piece of art,\n");
    return (0);
}
```

### 6-size.c: Size is not grandeur, and territory does not make a nation

A C program that prints the size of various types on the computer it is compiled and run on. The program should return `0`. Warnings are allowed. The `printf` function is used to display the sizes.


### 100-intel: Intel

A script that generates the assembly code (Intel syntax) of a C code and saves it in an output file. The C file name is saved in the variable `$CFILE`. The output file is named the same as the C file but with the extension `.s` instead of `.c`. Example: if the C file is `main.c`, the output file should be `main.s` using the command `gcc -S -
