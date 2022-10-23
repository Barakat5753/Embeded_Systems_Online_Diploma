/*
 ============================================================================
 Name        : Lab18.c
 Author      : Barakat Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Continue Statement
 ============================================================================
 */

#include <stdio.h>


int main() {
	int i;
	for(i=0;i<10;i++){
		if(i==5||i==6){
			printf("Skipping %d from display using Continue\n", i);
			continue;
		}
		printf("%d\n", i);
	}

	return 0;
}
