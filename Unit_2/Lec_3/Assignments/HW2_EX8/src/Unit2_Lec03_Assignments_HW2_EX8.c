/*
 ============================================================================
 Name        : Unit2_Lec03_Assignments_HW2_EX8.c
 Author      : Barakat Ibrahim
 Version     : 0.0
 Description : Unit2 - Lecture 03 (C-Basics) - Assignments - Homework2 - Ex 8
 Description : Simple Calculator
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char Operator;
	float x, y;
	while(1){
		printf("Enter operator either + or - or * or / :");
		fflush(stdin); fflush(stdout);
		scanf("%c", &Operator);
		printf("Enter two Operands:");
		fflush(stdin); fflush(stdout);
		scanf("%f %f", &x, &y);
		switch(Operator){
		case '+':{
			printf("%f + %f = %f\n", x, y, x+y);
		}
		break;
		case '-':{
			printf("%f - %f = %f\n", x, y, x-y);
		}
		break;
		case '*':{
			printf("%f * %f = %f\n", x, y, x*y);
		}
		break;
		case '/':{
			printf("%f / %f = %f\n", x, y, x/y);
		}
		break;
		default:{
			printf("You Entered Wrong operator\n");
		}
		}
	}
	return 0;
}
