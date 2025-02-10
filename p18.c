#include<stdio.h>
#define pi 3.1416
int main()
{
    float r,a,p;
    printf("Enter radius of a circle:");
    scanf("%f",&r);
    a=pi*r*r;
    p=2*pi*r;
    printf("Area and perimeter are %f and %f respectively",a,p);
    return 0;
}