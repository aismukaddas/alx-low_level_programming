#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int _putchar(char c)
{
    putchar(c);
    return 0;
}

int _islower(int c)
{
    return islower(c);
}

int _isalpha(int c)
{
    return isalpha(c);
}

int _abs(int n)
{
    return abs(n);
}

int _isupper(int c)
{
    return isupper(c);
}

int _isdigit(int c)
{
    return isdigit(c);
}

int _strlen(char *s)
{
    return strlen(s);
}

void _puts(char *s)
{
    puts(s);
}

char *_strcpy(char *dest, char *src)
{
    return strcpy(dest, src);
}

int _atoi(char *s)
{
    return atoi(s);
}

char *_strcat(char *dest, char *src)
{
    return strcat(dest, src);
}

char *_strncat(char *dest, char *src, int n)
{
    return strncat(dest, src, n);
}

char *_strncpy(char *dest, char *src, int n)
{
    return strncpy(dest, src, n);
}

int _strcmp(char *s1, char *s2)
{
    return strcmp(s1, s2);
}

char *_memset(char *s

