/*
 * c.c
 *
 *  Created on: Oct 5, 2020
 *      Author: Dell
 */

/*
 * c.c

 *
 *  Created on: Oct 5, 2020
 *      Author: Dell
 */
/*
 * test.c
 *
 *  Created on: Oct 5, 2020
 *      Author: Dell
 */
#include"stdio.h"
#include"string.h"
#include<stdbool.h>

int main()
{
	/*EX1*/
	//	char mat[100];
	//	char letter;
	//	int length ,rep=0;
	//	printf("Enter the String: ");
	//	fflush(stdin); fflush(stdout);
	//	gets(mat);
	//	fflush(stdin); fflush(stdout);
	//	printf("Enter a character to find Frequency: ");
	//	fflush(stdin); fflush(stdout);
	//	scanf("%c" , &letter);
	//	fflush(stdin); fflush(stdout);
	//	length = strlen(mat);
	//	for(int i=0;i<length;i++)
	//	{
	//		if(mat[i] == letter)
	//		{
	//			rep++;
	//		}
	//	}
	//	printf("Frequency of %c is %d",letter,rep);

	/*EX2*/
	//	char mat[100];
	//	int rep=0;
	//	printf("Enter a string: ");
	//	fflush(stdin); fflush(stdout);
	//	gets(mat);
	//	int i=0;
	//	while(mat[i]!=0)
	//	{
	//		rep++;
	//		i++;
	//	}
	//	printf("Length of string %d",rep);

	/*EX3*/
	char mat[100];
	char reverse[100];
	int length;
	printf("Enter the string: ");
	fflush(stdin); fflush(stdout);
	scanf("%s",mat);
	length = strlen(mat);
	//printf("%d",length);
	//	int length = strlen(mat);
	for(int i=0;i<length; i++)
	{
		reverse[i] = mat[length-(i+1)];
		printf("%c",reverse[i] );
	}


}




