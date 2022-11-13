#include<stdio.h>
#include<string.h>
int main()
{
        //Declaration of variables
	char string[100],ch; 
	int count=0; 
	printf("Enter string within 100 characters: ");
	//User input string
	gets(string); 
	printf("Highest frequency to count : ");
	//Character to find
	scanf("%c",&ch); 
	//Loop to run till the last character of string
	for(int i=0;string[i]!='\0';i++) 
	{
		if(string[i]==ch)
		//Counting the character 
			count++; 
	}
	//Printing the character which have highest frequency
	printf("The character '%c' available for %d times\n", ch,count); 
}
