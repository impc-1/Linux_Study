#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define EXIT 0
#define CREATE_FILE 1
#define WRITE_FILE 2
#define READ_FILE 3
#define STAT_FILE 4
#define CHMOD_FILE 5

void create_file(char *file_path);

void write_file(char *file_path);

void read_file(char *file_path);
void stat_file(char *file_name);

void chmod_file(char *file_name);

void showMenu();
