/*
 ============================================================================
 Name        : Lab10.c
 Author      : Barakat Ibrahim
 Version     :

 Description : Comparing 2 Numbers
 ============================================================================
 */

#include <stdio.h>


int main() {
	int a,b,c;
	printf("Enter 3 Numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d %d", &a, &b, &c);
	if (a>b){
		if (a>c){
			printf("The Largest Value id %d\r\n", a);
		}
		else
			printf("The Largest Value id %d\r\n", c);
	}
	else{
		if (b>c){
			printf("The Largest Value id %d\r\n", b);
		}
		else
			printf("The Largest Value id %d\r\n", c);
	}


	return 0;
}
