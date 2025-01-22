#include<stdio.h>
int main()
{
    
    int num,rem,rev=0,copy;
    printf("enter any number");
    scanf("%d",&num);
    copy=num;
    while(num>0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    printf("\n The reverse order of %d is %d",copy,rev);
    return 0;
}