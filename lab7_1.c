#include <stdio.h>
int main() 
{
    float arr[10];
    int i;
    printf("Enter 10 floating-point numbers:\n");
    for(i = 0; i < 10; i++) 
    {
        scanf("%f", &arr[i]);
    }
    printf("The entered numbers are:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%.2f ", arr[i]);
    }
    return 0;
}
