/*
 ============================================================================
 Name        : Unit2_Lec03_Assignments_HW2_EX6.c
 Author      : Barakat Ibrahim
 Version     : 0.0
 Description : Unit2 - Lecture 03 (C-Basics) - Assignments - Homework2 - Ex 6
 Description : Write C Program to check Calculate sum of natural numbers up to used input
 ============================================================================
 */

#include <stdio.h>

int main() {
	int x , y , sum = 0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&y);
	for (x=1;x<=y;x++){
		sum +=x;
	}
	printf("Sum = %d",sum);
	return 0;
}
