//
//  string.h
//  
//
//  Created by James Spann on 9/13/14.
//
//

#ifndef _string_h
#define _string_h

typedef struct {
    int length;
    char letters[32];
} String;

extern int isequal(String x, String y);
extern int getLen(String x);
#endif
