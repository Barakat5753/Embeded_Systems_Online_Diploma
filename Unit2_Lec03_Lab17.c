/*
 ============================================================================
 Name        : Lab17.c
 Author      : Barakat Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Go To Statement
 ============================================================================
 */

#include <stdio.h>


int main() {
	char choice;
	float x,y;
	evaluate_again:
	printf("Enter x Value: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &x);
	y = 5*x*x+3*x+2;
	printf("\r\ny(%f) = %f", x,y);

	printf("\r\ndo you want to calculate again (y/n): ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&choice);

	if((choice == 'y') || (choice == 'Y'))
	{
		goto evaluate_again;
	}

	return 0;
}
