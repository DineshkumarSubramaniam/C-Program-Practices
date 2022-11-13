#include<stdio.h>

//Function declaration
void display(int number); 
int main()
{
        //Declaration of variables
	int number,i; 
	printf("Enter the input integer: ");
	//User input integer number
	scanf("%d",&number); 
	//Function call
	display(number); 
	printf("\nAfter reversal of bits for number %d is : \n",number);
	// For loop to reverse the bits of an given number
	for(i=0;i<sizeof(int)*8;i++) 
	{
		if(number&(1<<i))
			printf("1 ");
		else 
			printf("0 ");
	}
	printf("\n");
}



//Function call to show the bits before the reversal
void display(int number) 
{
	printf("\nBefore reversal of bits for number %d is : \n",number);
	for(int i=((sizeof(int)*8)-1);i>=0;i--)
	{
		if(number&(1<<i))
			printf("1 ");
		else
			printf("0 ");
	}
	printf("\n");
}
