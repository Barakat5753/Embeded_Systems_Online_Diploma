/*
 ============================================================================
 Name        : Lab15.c
 Author      : Barakat Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Student's Average Grades using for loop
 ============================================================================
 */

#include <stdio.h>


int main() {
	int i , n;
	float d, sum;
	printf("Enter Number of Students: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=1; i<=n ; i++){
		printf("Enter Student %d degree: ", i);
		fflush(stdin); fflush(stdout);
		scanf("%f", &d);
		sum+=d;
	}
	printf("Average is: %f \r\n", sum/n);

	return 0;
}
