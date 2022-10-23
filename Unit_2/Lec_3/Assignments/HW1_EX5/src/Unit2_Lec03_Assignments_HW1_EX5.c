/*
 ============================================================================
 Name        : Unit2_Lec03_Assignments_HW1_EX5.c
 Author      : Barakat Ibrahim
 Version     : 0.0
 Description : Unit2 - Lecture 03 (C-Basics) - Assignments - Homework1 - Ex 4
 Description : Write C Program to Find ASCII Value of a Character
 ============================================================================
 */

#include <stdio.h>

int main() {
	unsigned char C;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &C);
	printf("ASCII value of %c = %d", C, C);
	return 0;
}
