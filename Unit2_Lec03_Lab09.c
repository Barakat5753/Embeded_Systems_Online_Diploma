/*
 ============================================================================
 Name        : Lab09.c
 Author      : Barakat Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : If-Statement - Circumference and Area
 ============================================================================
 */

#include <stdio.h>


int main() {
	char choice; float radius , area , Circumference;
	printf("Enter Circle radius: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f",&radius);
	printf("Enter a to print Area, c to print Circumference: \n");
	fflush(stdin); fflush(stdout);
	scanf("%c", &choice);
	if((choice == 'a') || (choice =='A')){
		area = 3.14159 * radius * radius;
		printf("\r\narea is %f\n\n",  area);
	}
	else if((choice =='c') || (choice == 'C')){
		Circumference = 2 * 3.14159 * radius;
		printf("\r\nCircumference is %f\r\n",Circumference);
	}
	else
		printf("\r\nwrong choice\r\n");
	return 0;
}
