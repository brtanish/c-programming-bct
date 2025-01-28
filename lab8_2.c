#include <stdio.h>
int main() 

    int arr[5], sum = 0, *ptr, i;
    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    for(i = 0; i < 5; i++)
    {
        sum += *(ptr + i);
    }
    printf("Sum of the elements: %d\n", sum);
    return 0;
}
