#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{ 
        //Declaration
	char string[100]; 
	FILE *fp1; 
	// Creating a new file
	fp1=fopen("File_Source1.txt","w+"); 
	printf("Enter the string : ");
	// Getting an input string from user
	gets(string);         
	printf("\n");
	// Copying from String to fp
	fputs(string,fp1); 
	printf("\nThe user printed is : ");
	//Printing the string
	printf("%s\n",string);
	//Closing an opened file
	fclose(fp1);
	return 0;
}
