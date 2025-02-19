/*  
C program to pass function 1 as an argument
to a function 2
*/

#include <stdio.h>

// function 1
int fun_1(int a , int b)
{
    return (a+b);
}

// function 2
int fun_2(int temp)
{
    printf("\nThe value of temp is : %d",temp);
}

// main function
int main()
{
    // define some variables
    int i=5 , j=6;
    
    // calling the function fun_2 and Passing
    // fun_1 as an argument to it
    fun_2(fun_1(i,j));
    
    return 0;
}
