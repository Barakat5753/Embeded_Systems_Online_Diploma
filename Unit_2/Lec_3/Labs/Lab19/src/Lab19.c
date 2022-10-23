/*
 ============================================================================
 Name        : Lab19.c
 Author      : Barakat Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Print from 0->9 in the first row and decrease by 1 char from smallest in the upcoming
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int i, j;
	for (i=0;i<=9;i++)
	{
		for(j=i;j<=9;j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}
