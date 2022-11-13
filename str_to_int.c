#include <stdio.h>

//Function definition
int myAtoi(char* str) 
{
	int result = 0;
	for (int iteration = 0; str[iteration] != '\0'; iteration++)
	{
		result = result * 10 + str[iteration] - '0';
	}
	//Returning the integer result of an string
	return result; 
}


int main()
{
        //Declaration of variables
	char str[100]; 
	printf("Enter the string\n");
	
	//Input string
	scanf("%s",str);
	
	//Function call
	int val = myAtoi(str); 
	
	//Printing the result
	printf("The output is: %d\n", val);
	return 0;
}
