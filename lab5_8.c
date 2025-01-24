#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,i,y=0;
    printf("enter the value for x and n:");
    scanf("%d%d",&x,&n);
    for(i=0;i<n;i++)
    {
        y=y+pow(x,n);
    }
    printf("%d",y);
    return 0;
}