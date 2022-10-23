/*
 ============================================================================
 Name        : Unit2_Lec03_Assignments_HW2_EX5.c
 Author      : Barakat Ibrahim
 Version     : 0.0
 Description : Unit2 - Lecture 03 (C-Basics) - Assignments - Homework2 - Ex 5
 Description : Write C Program to check whether a Character is alphabet or not
 ============================================================================
 */

#include <stdio.h>

int main() {
	char x;
	while(1){
		printf("Enter an character: ");
		fflush(stdin); fflush(stdout);
		scanf("%c", &x);
		if(((x>=65)&&(x<=90))||((x>=97)&&(x<=122))){

			printf("%c is an alphabet\n",x);
		}

		else{
			printf("%c is not an alphabet\n",x);
		}
	}
	return 0;
}
