#include<stdio.h>
#include<stdlib.h>
int main()
{
	int length=0,i,Temp,bits;
	char *name;
	
	//Assigning the number of bits
	printf("Enter the bits to assign:"); 
	//User input how many bits
	scanf("%d",&bits);
	//Allocating the bits  
	name=(char*)malloc(bits*sizeof(char)); 
	printf("Enter the string without space:");
	//gets(name);
	
	//User input sring
	scanf("%s",name); 
	for(i=0;name[i]!='\0';i++)
	{
	        //Calculating the length of string
		length++; 
	}
	
	//Printing the given string
	printf("The given string is: %s",name); 
	
	//Loop for the reversal of an string
	for(i=0;i<length/2;i++) 
	{
		Temp=name[i];
		name[i]=name[length-i-1];
		name[length-i-1]=Temp;
	}
	
	//Printing the reversal string
	printf("\nString after the reversal is: %s",name); 
	return 0;
}
