//
//  math.c
//  
//
//  Created by James Spann on 9/13/14.
//
//

#include <math.h>

#ifndef M_PI
#define 3.14159
#endif

unsigned short rand_pos = 0xACE1u;

int abs(int a){
    return (a>0)?a:-a;
}

double fabs(double a){
    return (a>0)?a:-a;
}

double pow(double a, double b){//b is the exponenet
    double c = 1;
    int i;
    for (i=0;i<b;i++){
        c *= a;
    }
    return c;
}

int fact(int a){
    return (a==1)? 1 : (a*fact(a-1));
}

    
double sin(double a){
    while (a > M_PI)    a -= 2*M_PI;
    while (a < -1*M_PI) a += 2*M_PI;
    return a - pow(a,3)/fact(3) + pow(a,5)/fact(5) - pow(a,7)/fact(7) + pow(a,9)/fact(9);    
}

double cos(double a){
    return sin(a-M_PI/2);
}

double tan(double a){
    return sin(a)/sin(a-M_PI/2);
}

// Take position determined in srand and cycles throug 57 more
// Very pseudo-random
int rand(void){
    //http://xkcd.com/221/
    //return 4;
    unsigned b;
    int i;
    for (i=0;i<59;i++){
        b = ((rand_pos>>0)^(rand_pos>>2)^(rand_pos>>3)^(rand_pos>>5))&1;
        rand_pos = (rand_pos>>1)|(b<<15);
    }
    return rand_pos;
}

// Cycle through rand_pos a-times
void srand(int a){
    //Fibbonacci linear feedback shift register
    unsigned b;
    int i;
    for (i=0;i<a;i++){
        b = ((rand_pos>>0)^(rand_pos>>2)^(rand_pos>>3)^(rand_pos>>5))&1;
        rand_pos = (rand_pos>>1)|(b<<15);
    }
    
}

//RegEx Solve function
double dsolve(char *Equation){
	
}