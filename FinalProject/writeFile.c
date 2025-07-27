#include <stdio.h>

void writeFile() 
{
	char filename[100];
	char input[1000];
	FILE *fp;
	
	printf("Enter filename: ");
	scanf("%s", filename);
	
	while(getchar() != '\n'); //clears input buffer before using fgets
	
	printf("Enter the ext you want to write to the file (Max char size of 1000):\n"); //limits input to 1000 characters
	fgets(input, sizeof(input), stdin); //includes any spaces or whitespace with user input
	
	fp = fopen(filename, "w");
	
	if (fp == NULL)
	{
		printf("Failed to open file: %s\n", filename); //error
		return;
	}
	
	fprintf(fp, "%s", input);
	fclose(fp);
	printf("Your input has been written to designated file: %s\n", filename);
}

