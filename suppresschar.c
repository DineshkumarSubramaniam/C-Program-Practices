#include<stdio.h>
#include<string.h>
void removeChar(char * string, char charToRemmove)
{
        //Declaration of variables
	int iteration1, iteration2;
	
	//Calculating the length of the string
	int length = strlen(string); 
	for(iteration1=0; iteration1<length; iteration1++)
	{
	   //If the character to remove matches the character in string this statement gets activates
		if(string[iteration1] == charToRemmove)
		{
			for(iteration2=iteration1; iteration2<length; iteration2++)
			{
			        //Iteration to remove the character
				string[iteration2] = string[iteration2+1]; 
			}
			//Decreasing the length of the string
			length--; 
			
			//Decreasing the length of the iteration
			iteration1--; 
		}
	}

}
void main()
{
        //Declaration of variables
	char string[100],ch; 
	
	//Declaration of variables
	int iteration1,iteration2,length; 
	printf("Enter the string within 100 characters: \n");
	
	//User input for the string 
	gets(string); 
	printf("Enter a char you want to remove : ");
	//User input as which character needs to be removed from the string
	scanf("%c",&ch); 
	
	//Function call
	removeChar(string,ch); 
	printf("String after removing '%c': %s\n", ch, string);
} 
