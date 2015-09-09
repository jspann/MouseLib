//
//  string.h
//  
//
//  Created by James Spann on 9/13/14.
//
//

#ifndef _string_h
#define _string_h
#import "ctype.h"
typedef struct{
	char letters[32];
	bool equals(String mystr);
	char charAt(int);
	int length(String mystr);
	void append()
	
}String;

extern int isequal(String x, String y);
extern int getLen(String x);
#endif
