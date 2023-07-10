#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define READ_ERROR 1
#define WRITE_ERROR 2
#define BUFFERSIZE 1024

int append_text_to_file(const char *filename, char *text_content);
char *create_buffer(char *fileName);
int error_handler(int fd, char *fname, int type, char *buffer);
void close_file(int fd);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
