/*
 ============================================================================
 Name        : Lab13.c
 Author      : Barakat Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Area & Circumference using Switch
 ============================================================================
 */

#include <stdio.h>


int main() {
	char choice; float r, a, Circ;
	printf("Enter Radius: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &r);
	printf("Enter 'a' for Area OR 'c' for Circumference: ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &choice);
	switch(choice){
	case'a':
	case'A':
	{
		a = 3.14159 * r * r;
		printf("\r\narea is %f\r\n",  a);
	}
	break;
	case'c':
	case'C':
	{
		Circ = 2  * 3.14159 * r;
		printf("\r\nCircumference is %f\r\n",  Circ);
	}
	break;
	default:
		printf("\r\nwrong choice\r\n");
		break;
	}


	return 0;
}
