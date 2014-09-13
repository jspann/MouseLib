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
 
int factorial(int a){
    int b = 1;
    for (int i=1;i<=a;i++){
        b *= i;
    }
    return b;
}
    
double sin(double a){
    
}

double cos(double a){
    
}

double tan(double a){
    
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

double factorial(int x){
    int d = 1;
    for (int i =x; i>0; i--) {
        d *= i;
    }
    return d;
}