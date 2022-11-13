#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Open two files to be merged
	FILE *fp1 = fopen("File_Source1.txt", "r");
	FILE *fp2 = fopen("File_Source2.txt", "r");

	// Open file to store the result
	FILE *fp3 = fopen("File_Destination.txt", "w");
	char c;
         
        // Condition to check the file is present or not
	if (fp1 == NULL || fp2 == NULL || fp3 == NULL)    
	{
		puts("Could not open files");
		exit(1);
	}


	// Copy contents of first file to File3.txt
	while ((c = fgetc(fp1)) != EOF)
	{
		fputc(c, fp3);

	}  



	// Copy contents of second file to File3.txt
	while ((c = fgetc(fp2)) != EOF)
	{
		fputc(c, fp3);
	}

	printf("Merged File1.txt and File2.txt into File3.txt , Check the 'File_Destination.txt file\n\n");

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}
