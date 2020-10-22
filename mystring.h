#ifndef MYSTRING_H
#define MYSTRING_H

int mystrlen( char *s);
char * mystrncpy(char *s1, char *s2, int size);
char * mystrncat(char *s1, char *s2, int size);
char * mystrchr(char * s, int c);
int mystrcmp(char *s1, char *s2);

#endif