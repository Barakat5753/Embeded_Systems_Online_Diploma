/*
 ============================================================================
 Name        : Lab14.c
 Author      : Barakat Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Summation between 1 & 99
 ============================================================================
 */

#include <stdio.h>


int main() {
	int i , sum = 0;
	for(i = 1 ; i<=99 ; i++){
		sum+=i;
	}
	printf("Summation of values is: %d", sum);
	return 0;
}
