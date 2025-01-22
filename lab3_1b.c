#include<stdio.h>
#include<math.h>
#define PLUS +
#define MINUS -
#define MULT *
#define DIVIDE /
int main()
{
    int a=20,b=60;
    printf("the sum is %d\n",a PLUS b);
    printf("the difference is %d\n",a MINUS b);
    printf("the product is %d\n",a MULT b);
    printf("the division is %d",a DIVIDE b);
    return 0;
}