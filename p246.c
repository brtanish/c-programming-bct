/*  
C program to find sum of following series
* x+x/2!+x/4!+.....x/n!
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
	int count=1,cnt=0;
	
	// reade the value of x
	printf("\nEnter the value of x : ");
	scanf("%d",&x);
	
	/*read value of N*/
	printf("Enter total number of terms: ");
	scanf("%d",&N);
	
	/*set sum by 0*/
	sum=0.0f;
	
	/*calculate sum of the series*/
	for(i=1;i<=N;i++)
	{
		sum = sum + ( (float)(x) / (float)(factorial(count)));
		count = (count*2);
		//printf("\ncount : %d\n",count);	fflush(stdout);
	}
	
	/*print the sum*/
	printf("Sum of the series is: %f\n",sum);
	
	return 0;
}
