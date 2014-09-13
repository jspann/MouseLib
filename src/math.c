//
//  math.c
//  
//
//  Created by James Spann on 9/13/14.
//
//

#include <math.h>

int abs(int a){
    return (a>0)?a:0-a;
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
    // Taylor series: slow
    //return a - pow(a,3)/factorial(3) + pow(a,5)/factorial(5) - pow(a,7)/factorial(7) + pow(a,9)/factorial(9);
    
    double b;
    while (a > M_PI){
        a -= 2*M_PI;
    }
    while (a < -1*M_PI){
        a += 2*M_PI;
    }
    
    if (x < 0){
        b = 1.27323954 * x + .405284735 * x * x;
        b = (b < 0)?0.225*(b*-b-b)+b:0.225*(b*b-b)+b;
    }
    else{
        b = 1.27323954 * x - 0.405284735 * x * x;
        b = (b < 0)?0.225*(b*-b-b)+b:0.225*(b*b-b)+b;
    }
    return b;
}

double cos(double a){
    return sin(a-M_PI/2);
}

double tan(double a){
    return sin(a)/sin(a-M_PI/2);
}

int rand(void){
    /*int r[MAX];
    int i;
    
    r[0] = seed;
    for (i=1; i<31; i++) {
        r[i] = (16807LL * r[i-1]) % 2147483647;
        if (r[i] < 0) {
            r[i] += 2147483647;
        }
    }
    for (i=31; i<34; i++) {
        r[i] = r[i-31];
    }
    for (i=34; i<344; i++) {
        r[i] = r[i-31] + r[i-3];
    }
    for (i=344; i<MAX; i++) {
        r[i] = r[i-31] + r[i-3];
        printf("%d\n", ((unsigned int)r[i]) >> 1);
    }*/
    
}
