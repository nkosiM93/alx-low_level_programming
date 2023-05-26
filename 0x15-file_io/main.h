#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _copy(const char *filename, const char *fl2);
void _checkelf(char *h);
void _magic(char *h);
void _class(char *h, int x64);
void _data(char *h);
void _version(char *h);
void _os(char *h);
void _abiv(char *h);
void _type(char *h, int x64);
void _entry(char *h, int x64);
#endif
