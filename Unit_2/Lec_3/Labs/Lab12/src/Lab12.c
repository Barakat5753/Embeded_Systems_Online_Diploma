/*
 ============================================================================
 Name        : Lab12.c
 Author      : Barakat Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description :InLine Condition - Minimum of 2 Values
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int a , b;
	printf("Enter 2 Nums");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &a, &b);
	printf("The min is %d\r\n", (a<b)?a:b);


	return 0;
}
