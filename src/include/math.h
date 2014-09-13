//
//  math.h
//  
//
//  Created by James Spann on 9/13/14.
//
//

#ifndef _math_h
#define _math_h

#define M_PI 3.14159265358979323846264338327

extern int abs(int a);
extern double pow(double a, double b);
extern int fact(int a);
extern double sqrt();

extern double sin(double a);
extern double cos(double a);
extern double tan(double a);


extern int rand(void);//Implemented from http://stackoverflow.com/questions/3783905/inside-random-function-how-is-it-implemented

#endif
