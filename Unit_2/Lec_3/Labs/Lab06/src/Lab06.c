/*
 ============================================================================
 Name        : Lab06.c
 Author      : Barakat Ibrahim
 Version     : 00
 Description : Hello World in C, Ansi-style
 C- Floats Input / Output - Emulator Issue
 ============================================================================
 */

#include <stdio.h>

int main() {
	float f;printf("Enter a number: ");
	fflush(stdout);
	// %f format string  is used in case of floats
	scanf("%f",&f);
	printf("value = %f", f);
	return 0;
}
