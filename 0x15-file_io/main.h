#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>
#define BUF_SIZE 1024

int _putchar(char);
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);
int _strlen(char *);
void close_file(int);
void check_elf(unsigned char *);
void print_magic(unsigned char *);
void print_class(unsigned char *);
void print_data(unsigned char *);
void print_version(unsigned char *);
void print_abi(unsigned char *);
void print_osabi(unsigned char *);
void print_type(unsigned int, unsigned char *);
void print_entry(unsigned long int, unsigned char *);
void close_elf(int);



#endif
