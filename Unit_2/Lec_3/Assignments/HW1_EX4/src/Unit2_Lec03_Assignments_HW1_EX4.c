/*
 ============================================================================
 Name        : Unit2_Lec03_Assignments_HW1_EX4.c
 Author      : Barakat Ibrahim
 Version     : 0.0
 Description : Unit2 - Lecture 03 (C-Basics) - Assignments - Homework1 - Ex 4
 Description : Write C Program to Multiply two Floating Point Numberss
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	float x,y;
	printf("Enter Two Numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &x, &y);
	printf("Product: %1.6f", x*y);


	return 0;
}
