#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter any three numbers:");
    scanf("%f%f%f",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%f is greatest.",a);
    }
    else if(b>a && b>c)
    {
        printf("%f is greatest.",b);
    }
    else{
        printf("%f is greatest.",c);
    }
    return 0;
}