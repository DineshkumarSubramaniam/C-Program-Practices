#include <stdio.h>

int findGCD(int a, int b);

int main() 
{
	int array[5],i;
	printf("\nEnter the array elements\n\n");
	for(i=0;i<5;i++)
	{
		printf("Enter the %d array :", i+1);
		//Getting an input integer from the user
		scanf("%d",&array[i]); 
	}

	int lcm = array[0];;
	int  gcd = array[0];

	//Loop through the array and find GCD
	//Using GCD to find the LCM
	for(int i=1; i<5; i++)
	{      
	        // Formula to find GCD
		gcd = findGCD(array[i], lcm); 
		// Formula to find LCM
		lcm = (lcm*array[i])/gcd;     
	} 

	printf("\nLCM for given 'N' number is: %d", lcm);
	printf("\nGCD for given 'N' number is: %d\n",gcd);
}


//Function returns GCD of a and b
int findGCD(int a, int b)
{  
        // Condition check to check whether the number is 0 or not
	if(b==0)    
	{ 
	         // Return the value of GCD
		return a;           
	}
	 // Return the value of GCD
	return findGCD(b, a%b);    
}

