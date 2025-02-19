#include <stdio.h>

int main()
{
	int terms; //to store total terms
	int i; //to run loo;
	long int sum; //to store sum of values
	long int temp; //to add the diff or initial term value
	
	//assign 0 to sum and assign 1 as initial term value
	sum =0;
	temp =1;
	
	//input total terms
	printf("Enter total number of terms: ");
	scanf("%d",&terms);
	
	//run loop to find sum of each value 
	//and then increase it with the differences
	for(i=0; i<terms; i++)
	{
		//print the  value
		printf("%ld ", temp);
		//print '+' sign in the series
		if(i<terms-1)
			printf("+ ");
		
		//add the value and store in sum
		sum += temp;
		//update/increase the value 
		temp = (temp*10)+1;		
	}
	
	//print the value of sum of the series
	printf("\nSUM of the series is: %ld\n",sum);
	
	return 0;
}
