//
//  ctype.h
//  
//
//  Created by James Spann on 9/13/14.
//
//

#ifndef _ctype_h
#define _ctype_h

#define TRUE 1
#define FALSE 0

typedef unsigned char bool;



extern int isalpha(int a);//abc
extern int isdigit(int a);//123
extern int isspace(int a);// ' ' \n
extern int isupper(int a);//uppercase
extern int islower(int a);//lowercase
extern int iseos(int a);//. ! ?

#endif
