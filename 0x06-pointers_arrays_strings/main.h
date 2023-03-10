#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD

/**
 * file: main.h
 * Auth: brian muthama
 *
 * Desc: Header file containing prototype for all functions
 *
 * used in the 0x06-pointers_arrays_strings directory
 */

#include <stdio.h>
#include <unistd.h>


int _putchar(char c);
=======
int _putchar(char);
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
<<<<<<< HEAD
void print_buffer(char *b, int size);


=======
void print_buffer(char *b, int size);  
>>>>>>> 44c74b5fa55a4c56c8d74fa9204bfa182a110b64
#endif
