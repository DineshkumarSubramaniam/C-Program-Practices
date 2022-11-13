#include <stdio.h>
#include<stdlib.h>
int main() 
{
        // Declaration of variable
	char *string;      
	int bits;        
	printf("Enter the bits to assign: ");
	scanf("%d",&bits);
	// Creating an dynamic memeory
	string=(char*)malloc(bits*(sizeof(char)));   
	printf("Enter the string: ");
	// User input string
	scanf("%s",string);    
	//gets(string);
	int iteration;
	
	// Loop to find the length of an string
	for (iteration = 0; string[iteration] != '\0'; iteration++);  
	printf("Length of the string is: %d", iteration);
	return 0;
}

