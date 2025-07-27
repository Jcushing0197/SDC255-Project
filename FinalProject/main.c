#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void displayMenu() {
	printf("\n--- Group 2's Main Menu ---\n\n");
	printf("1 - Read File\n");
	printf("2 - Write File\n");
	printf("3 - Addition and Subtraction\n");
	printf("4 - Multiplication and Division\n");
	printf("5 - Exit\n");
	printf("\n******************************\n");
	printf("Enter you choice: ");
}

int main(){
	int choice;
	
	do 
	{
		displayMenu();
		scanf("%d", &choice);
		printf("\n");
		
	switch (choice)
	{
		case 1: 
			readFile();
			break;
		case 2:
			writeFile();
			break;
		case 3:
			add_subtract();
			break;
		case 4:
			multiply_divide();
			break;
		case 5:
			printf("Exiting application.");
			break;
		default:
			printf("Invalid selection. Try again.");
	}
	printf("\n******************************\n");
	} while (choice != 5);
	
	return 0;
}
