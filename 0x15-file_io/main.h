#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>

/* Constant Macros */
#define OPEN_ERR -1
#define RDWR_EOF 0
#define RDWR_ERR -1

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Library functions */
int _strlen(char *s);

#endif
