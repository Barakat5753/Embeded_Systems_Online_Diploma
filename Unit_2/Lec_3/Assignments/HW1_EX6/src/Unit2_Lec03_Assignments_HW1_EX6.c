/*
 ============================================================================
 Name        : Unit2_Lec03_Assignments_HW1_EX6.c
 Author      : Barakat Ibrahim
 Version     : 0.0
 Description : Unit2 - Lecture 03 (C-Basics) - Assignments - Homework1 - Ex 6
 Description : Write Source Code to Swap Two Numbers
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	float a,b,c;
	printf("Enter Value of a:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter Value of b:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	c = b;
	b = a;
	a = c;
	printf("After Swapping, value of a = %1.2f\n", a);
	printf("After Swapping, value of b = %1.1f\n", b);

	return 0;
}
