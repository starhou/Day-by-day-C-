#include "basemath.h"

const int LENGTH_OF_ECG = 2000;


struct MAX_MIN max(const double x[], const int size)

{
    double max = 0;
    struct MAX_MIN out;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if (x[i]>max) 
            {
            max = x[i];
            out.b = i;
            }
    }
    out.a = max;
    return out;    
}

struct MAX_MIN min(const double x[], const int size)
{
    double max = 0;
    struct MAX_MIN out;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if (x[i]<max) 
            {
            max = x[i];
            out.b = i;
            }
    }
    out.a = max;
    return out;    
}