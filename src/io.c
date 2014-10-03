//
//  io.c
//  
//
//  Created by James Spann on 9/13/14.
//
//

#include <io.h>

#pragma mark File data

FILE *fopen(const char *restrict filename, const char *restrict mode){
    
}

#pragma mark Stream data

#pragma mark Miscellaneous

void exit(int v){
    __asm__ volatile("hlt");

}