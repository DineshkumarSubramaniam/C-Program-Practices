#include <stdio.h>

void setornot(int Number, int Bittocheck)
{
        // Condition to check whether the bit is set or not
	if (Number & (1 << (Bittocheck- 1)))   
	{
		printf("The given bit %d is set\n",Bittocheck);
	}
	
	// Condition to check whether the bit is set or not
	else              
	{
		printf("The given bit %d is not set\n",Bittocheck);
	}
}
int main()
{
        // Declaration of variable
	int Number,Bittocheck;            
	printf("Enter the integer number:");
	// Getting an input integer
	scanf("%d",&Number);              
	printf("Enter the bit number to check:");
	// Getting an input Bit to check
	scanf("%d",&Bittocheck);         
	// Function call
	setornot(Number, Bittocheck);
	return 0;
}
