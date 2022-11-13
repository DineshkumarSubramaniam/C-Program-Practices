#include <stdio.h>
int main()
{
        //Assigning a unsigner integer variable as 1 
	unsigned int iteration = 1; 
	//Checking whether it is Little endian or Big endian
	char *character = (char*)&iteration; 
	if (*character==1)
		printf("Little endian\n"); 
	else
		printf("Big endian\n");
	return 0;
}

