/*  
C program to find sum of following series
* 1^2/1! + 2^2/2! + 3^2/3! + 4^2/4! + ... n^2/n!
*/

#include <stdio.h>
#include <math.h>

/* function : factorial, to find factorial of a given number*/
long int factorial(int n)
{
    int i;
    long int fact=1;
 
    if(n==1) return fact;
 
    for(i=n;i>=1;i--)
        fact= fact * i;
 
    return fact;
}

// main function
int main()
{
	int i,N,x;
	float sum;
	
	/*read value of N*/
	printf("Enter total number of terms: ");
	scanf("%d",&N);
	
	/*set sum by 0*/
	sum=0.0f;
	
	/*calculate sum of the series*/
	for(i=1;i<=N;i++)
	{
		sum = sum + ( (float)(pow(N,2)) / (float)(factorial(N)));
	}
	
	/*print the sum*/
	printf("Sum of the series is: %f\n",sum);
	
	return 0;
}
