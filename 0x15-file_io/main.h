#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_file(int fd);
void copy_file(int fd_from, int fd_to);
int open_file(char *file_name, int flags, mode_t mode);
void usage(void);

#endif /* MAIN_H */
