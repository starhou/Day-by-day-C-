#include "basemath.h"
#include "basemath.c"


void main()
{
    double ecg[] = {1.5,2.8,3.3,7.2,-5};
    int length = 5;
    printf("length is %d\n", length);
    struct MAX_MIN out, out2;
    out =  max(ecg, length);
    out2 =  min(ecg, length);
    printf("%4.2f %d\n", out.a, out.b);
    printf("%4.2f %d\n", out2.a, out2.b);
}