//
//  io.c
//  
//
//  Created by James Spann on 9/13/14.
//
//

#include <io.h>

void exit(int v){
    __asm__ volatile("hlt");

}