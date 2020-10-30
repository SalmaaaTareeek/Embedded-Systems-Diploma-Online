/*
 * main.c

 *
 *  Created on: Oct 28, 2020
 *      Author: Dell
 */
#include<stdio.h>
#include"prototypes.h"

/* if you want to see any answer of any excersices you can uncomment the desired lines*/

void main()
{
	int num1;
	int num2;
	int result;

	// EX1
	//prime(num1,num2);

//	//EX2//
//	scanf("%d",&num1);
//	result = factorial(num1);
//	printf("Factorial of %d is %d",num1 , result);
//	//////

	//EX3//
//	printf("Enter Sentence: ");
//	fflush(stdin); fflush(stdout);
//	swap();
//	///////

	//EX4//
	printf("Enter base number");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num1);
	printf("Enter power number");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num2);
	result=power(num1,num2);
	printf("%d",result);
	//////////////////




}


