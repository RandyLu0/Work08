#include "mystring.h"
#include <stdio.h>
#include <stdlib.h>

int mystrlen(char *s){
    int len = 0;
    while(*s){
        len++;
        *s++;
    }
    return len;
}

char * mystrncpy( char *s1, char *s2, int size){
    int i;
    for(i = 0; i < size; i++){
        if(s2[i]){
            s1[i] = s2[i];
        }else{
            s1[i] = '\0';
        }
    }    
    return s1;
}

char * mystrncat( char *s1, char *s2, int size){
    int i;
    int s = mystrlen(s1);    
    for(i = 0; i < size; i++){
        if(s2[i]){
            s1[i + s] = s2[i];
        }
    }
    s1[i + s] = '\0';
    return s1;
}

int mystrcmp( char *s1, char *s2){
    while(*s1 || *s2){
        if(*s1 != *s2){
            return *s1 - *s2;
        }
        s1++; 
        s2++;
    }
    return 0;
}

char * mystrchr( char *s, int c){
    int len = mystrlen(s);
    int i;
    char *res = s;
    for(i = 0; i <= len; i++){
        if(*(res + i) == c){ 
            return res + i;
        }
    }
    return NULL;
}

