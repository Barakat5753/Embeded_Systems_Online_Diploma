/*
 ============================================================================
 Name        : Lab02.c
 Author      : Barakat Ibrahim
 Version     : 00
 Description : Hello World in C, Ansi-style
 Implicit Type Conversion
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int x = 10;
	char y = 'a';
	// y implicitly converted to int. ASCII
	// value of 'a' is 97
	x = x + y;
	float z = x + 1.0;
	printf("x= %d, z= %f", x , z);
	return 0;
}
