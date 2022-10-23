/*
 ============================================================================
 Name        : Unit2_Lec03_Assignments_HW2_EX4.c
 Author      : Barakat Ibrahim
 Version     : 0.0
 Description : Unit2 - Lecture 03 (C-Basics) - Assignments - Homework2 - Ex 4
 Description : Write C Program to check whether a number is Positive or negative
 ============================================================================
 */

#include <stdio.h>

int main() {
	float x;
	while(1){
		printf("Enter an number: ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &x);
		if(x > 0){
			printf("%2.2f is positive\n",x);
		}
		else if (x < 0){
			printf("%2.2f is negative\n",x);
		}
		else{
			printf("You Entered Zero\n");
		}
	}
	return 0;
}
