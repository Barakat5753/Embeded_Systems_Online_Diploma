/*
 ============================================================================
 Name        : Unit2_Lec03_Assignments_HW2_EX1.c
 Author      : Barakat Ibrahim
 Version     : 0.0
 Description : Unit2 - Lecture 03 (C-Basics) - Assignments - Homework2 - Ex 1
 Description : Write C Program to check whether a number is Even or Odd
 ============================================================================
 */

#include <stdio.h>

int main() {
	int x;

	while(1){
		printf("Enter an Integer you want to check: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &x);
		if(x%2==0){
			printf("%d is even\n",x);
		}
		else{
			printf("%d is odd\n",x);
		}
	}


	return 0;
}
