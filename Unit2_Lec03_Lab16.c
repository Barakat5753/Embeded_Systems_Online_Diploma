/*
 ============================================================================
 Name        : Lab16.c
 Author      : Barakat Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Break statement in while 1
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	int n = 0; float d , sum = 0;
	printf("Enter negative value to exit\r\n");
	while(1){
		printf("Enter Student (%d) degree: ", n+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &d);
		if (d<0) break;
		sum+=d;
		n++;
	}
	printf("Average  is: %f\r\n", sum/n);
	return 0;
}
