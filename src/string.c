//
//  string.c
//  
//
//  Created by James Spann on 9/13/14.
//
//

#include <string.h>

int isequal(String x, String y){
    for (int i=0; i<getLen(x); i++) {
        
    }
}

int getLen(String x){
    
}

void setValue(String x,const char *z){
    for (int t = 0; t< strlen(z); t++){
        
    }
}

int strlen(const char *str){
    const char *s;
    
    for (s = str; *s; ++s)
        ;
    return (s - str);
}