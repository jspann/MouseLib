//
//  math.c
//  
//
//  Created by James Spann on 9/13/14.
//
//

#include <math.h>

int abs(int a){
    return (a>0)?a:-a;
}

double pow(double a, double b){//b is the exponenet
    double c = 1;
    for (int i=0;i<b;i++){
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

int rand(void){
    //http://xkcd.com/221/
    return 4;
}
