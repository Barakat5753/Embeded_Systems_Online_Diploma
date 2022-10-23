/*
 ============================================================================
 Name        : Lab04.c
 Author      : Barakat Ibrahim
 Version     : 00
 Description : Hello World in C, Ansi-style
 Input / Output
 ============================================================================
 */

#include <stdio.h>

int main() {
	int testInteger;
	printf("Enter an integer: ");
	fflush(stdout);	fflush(stdin);
	scanf("%d",&testInteger);
	printf("\nNumber = %d",testInteger);
	return 0;
}
