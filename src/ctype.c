//
//  ctype.c
//  
//
//  Created by James Spann on 9/13/14.
//
//

#include <ctype.h>

int isalpha(int a){
    return ((64 < a && a < 91) || (96 < a && a < 123))? 1:0;
}

int isdigit(int a){
    return (47 < a && a < 57)? 1:0;
}

int isspace(int a){
    return (a == 32 || a == 10)? 1:0;
}

int isupper(int a){
    return (64 < a && a < 91)? 1:0;
}

int islower(int a){
    return (96 < a && a < 123)? 1:0;
}

int iseos(int a){
    return (a == 33 || a == 46 || a == 63)? 1:0;
}

void free (void* ptr){
    ptr = '\0';
}