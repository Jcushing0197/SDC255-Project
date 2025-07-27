#include <stdio.h>

void readFile() {
	char filename[100];
	char ch;
	FILE *fp;
	
	printf("Enter filename: ");
	scanf("%s", filename);
	
	fp = fopen(filename, "r");
	
	if (fp == NULL)
	{
		printf("Failed to open file: %s\n", filename);
	}
	
	printf("\n--- File Contents ---\n\n");
	while ((ch = fgetc(fp)) != EOF)
	{
		putchar(ch);
	}
	
	fclose(fp);
	printf("\n--- End of File ---\n");
}
