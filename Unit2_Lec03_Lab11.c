/*
 ============================================================================
 Name        : Lab11.c
 Author      : Barakat Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description :InLine Condition
 ============================================================================
 */

#include <stdio.h>


int main(){

	int a, b, min;
	printf("Enter 2 Numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &a, &b);
	min = (a<b) ?a:b;
	printf("The Min is %d \r\n", min);
	return 0;
}
