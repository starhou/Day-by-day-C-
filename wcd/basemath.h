#ifndef BASEMATH_H
#define BASEMATH_H

// Include Files
// 
#include<stdio.h>
#include<stdlib.h>

struct MAX_MIN
{
    /* data */
    double a;
    int b;
};

// Function Declarations
struct MAX_MIN max(const double X[], const int size);
struct MAX_MIN min(const double X[], const int size);
double abs(const double X);
double sum(const double X[], const int size, double x);
// double division(double X[],)
#endif