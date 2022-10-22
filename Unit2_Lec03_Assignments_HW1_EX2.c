/*
 ============================================================================
 Name        : Unit2_Lec03_Assignments_HW1_EX2.c
 Author      : Barakat Ibrahim
 Version     : 0.0
 Description : Unit2 - Lecture 03 (C-Basics) - Assignments - Homework1 - Ex 2
 Description : Write C Program to Print a Integer Entered by a User
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int i ;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &i);
	printf("You entered: %d", i);
	return 0;
}
