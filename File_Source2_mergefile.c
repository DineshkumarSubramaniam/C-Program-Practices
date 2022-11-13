#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        //Declaration
	char string2[100]; 
	FILE *fp2;
	// Creating a new file
	fp2=fopen("File_Source2.txt","w+"); 
	printf("Enter the string : ");
	// Getting an user input string from user
	gets(string2);    
	printf("\n");
	// Copying from String to fp
	fputs(string2,fp2); 
	printf("\nThe user printed is : ");
	//Printing an string 
	printf("%s\n",string2);
	//Closing an opened file
	fclose(fp2);
	return 0;
}
