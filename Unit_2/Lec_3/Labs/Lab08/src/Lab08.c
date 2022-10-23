/*
 ============================================================================
 Name        : Lab08.c
 Author      : Barakat Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Prinf Tricks - Conditional
 ============================================================================
 */

#include <stdio.h>
#include "math.h"

void main() {
	int a = 9, b = 8, c = 12;

	// any number is true except 0 is false
	printf("%d\r\n", a>b); // 1
	printf("%d\r\n", b>c); // 0
	printf("%d\r\n", a<=9); // 1
	printf("%d\r\n", a!=9); // 0
	printf("%d\r\n", (a-b)>(c-b)); // 0
	printf("%d\r\n", a>b && c>b); // 1
	printf("%d\r\n", a>b && c<b); // 0
	printf("%d\r\n", a>b || c<b); // 1
	printf("%d\r\n", !(a<b)); // 1
	printf("%d\r\n", 3 && 0); // 0
	printf("%d\r\n", -15 || 0); // 1
	printf("%d\r\n", !(-15)); // 0

}
