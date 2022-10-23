/*
 ============================================================================
 Name        : Unit2_Lec03_Assignments_HW2_EX3.c
 Author      : Barakat Ibrahim
 Version     : 0.0
 Description : Unit2 - Lecture 03 (C-Basics) - Assignments - Homework2 - Ex 3
 Description : Write C Program to Find largest number among 3 numbers
 ============================================================================
 */

#include <stdio.h>

int main() {
	float a,b,c;

	printf("Enter Three Numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &a , &b, &c);
	if(a>b){
		if (a>c){
			printf("%2.2f is the largest number\n",a);
		}
		else{
			printf("%2.2f is the largest number\n",c);
		}
	}
	else{
		if (b>c){
			printf("%2.2f is the largest number\n",b);
		}
		else{
			printf("%2.2f is the largest number\n",c);
		}
	}
	return 0;
}
