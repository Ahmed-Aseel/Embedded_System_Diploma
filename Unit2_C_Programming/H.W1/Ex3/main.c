/*
 * main.c
 *
 *  Created on: Mar 2, 2022
 *      Author: Aseel
 *
 *  Description: C Program to Add Two Integers
 */

#include "stdio.h"

int main()
{
	int num1, num2;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &num1, &num2);
	printf("Sum: %d\n", num1 + num2);

	return 0;
}
