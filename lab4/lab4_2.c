#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        if(a%2==0)
        {
            printf("%d is greatest and is even",a);
        }
        else{
            printf("%d is greatest and is odd",a);
        }
    }
    else if (b>a && b>c)
    {
        if(b%2==0)
        {
            printf("%d is greatest and is even",b);
        }
        else{
            printf("%d is greatest and is odd",b);
        }
    }
    else{
        if(c%2==0)
        {
            printf("%d is greatest and is even",c);
        }
        else{
            printf("%d is greatest and is odd",c);
        }
        return 0;
    }
}