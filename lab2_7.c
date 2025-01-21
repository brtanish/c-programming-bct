#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,g;
    int x=2,z=4;
    a = x++ + ++x;
    printf("a=%d\n",a);
    b = ++x + ++x;
    printf("b=%d\n",b);
    c = ++x + ++x + ++x;
    printf("c=%d\n",c);
    d = x>z;
    printf("d=%d\n",d);
    e = x>z?x:z;
    printf("e=%d\n",e);
    f = x&z;
    printf("f=%d\n",f);
    g= x>>2 + z<<1;
    printf("g=%d",g);
    return 0;
}