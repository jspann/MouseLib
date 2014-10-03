//
//  io.h
//  
//
//  Created by James Spann on 9/13/14.
//
//

#ifndef _io_h
#define _io_h

#define EOF -1
#define assert(ignore)((void) 0)

#pragma mark File data
//typedef unsigned int FILE;
typedef struct MyStruct {
    int data1;
    char data2;
} FILE;
FILE *fopen(const char *restrict filename, const char *restrict mode);

#pragma mark Stream data
#pragma mark Miscellaneous
extern void exit(int v);

#endif
