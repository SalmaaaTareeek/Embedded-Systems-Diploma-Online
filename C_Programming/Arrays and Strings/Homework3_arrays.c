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
	//	float mat1 [2][2];
	//	float mat2 [2][2];
	//	float res [2][2];
	//	/* For Entering the values of First Matrix */
	//	printf("Enter the Elements of the first Matrix\n");
	//	fflush(stdin);
	//	fflush(stdout);
	//	for(int i = 0 ; i<2 ; i++)
	//	{
	//		for (int j = 0 ; j<2 ; j++)
	//		{
	//			printf("Enter the Value of a%d%d:",i,j);
	//			fflush(stdin);
	//			fflush(stdout);
	//			scanf("%f" , &mat1[i][j]);
	//		}
	//	}
	//	/* For Entering the values of Second Matrix*/
	//	printf("Enter the Elements of the Second Matrix\n");
	//	fflush(stdin);
	//	fflush(stdout);
	//	for(int i = 0 ; i<2 ; i++)
	//		{
	//			for (int j = 0 ; j<2 ; j++)
	//			{
	//				printf("Enter the Value of b%d%d:",i,j);
	//				fflush(stdin);
	//				fflush(stdout);
	//				scanf("%f" , &mat2[i][j]);
	//			}
	//		}
	//	/* For Summing The 2 matrices */
	//	for(int i = 0;i<2 ; i++)
	//	{
	//		for (int j = 0 ; j<2 ; j++)
	//		{
	//			res[i][j] = mat1[i][j]+mat2[i][j];
	//		}
	//
	//
	//	}
	//
	//	/*For Printing The Whole Matrix */
	//	for (int i = 0; i<2 ; i++)
	//	{
	//		for(int j = 0 ; j<2 ; j++)
	//		{
	//			printf("%.1f ",res [i][j]);
	//		}
	//		printf("\n");
	//
	//	}

	/*EX2*/
	//	int size;
	//	float result =0;
	//	//float x;
	//	float mat[6];
	//	printf("Enter The Numbers of data: ");
	//	fflush(stdin);
	//	fflush(stdout);
	//	scanf("%d" ,&size);
	//	for (int i = 0 ; i<size ; i++)
	//	{
	//		printf("Enter Number: ");
	//		fflush(stdin);
	//		fflush(stdout);
	//		scanf("%f",&mat[i]);
	//	}
	//	/*To Calculate The Average*/
	//	for (int i = 0 ; i<size; i=i+2)
	//	{
	//		result = mat[i]+mat[i+1]+result;
	//		//printf("Average=%.2f",result);
	//
	//	}
	//	printf("Average=%.2f",result/size);
	//
	//
	/*EX3*/
	//	int mat[50][50];
	//	int transpose[50][50];
	//	int rows,cols;
	//	printf("Enter rows and columns of matrix: ");
	//	fflush(stdin); fflush(stdout);
	//	scanf("%d %d",&rows,&cols);
	//	/*entering the rown and columns*/
	//	for(int i = 0; i<rows ; i++)
	//	{
	//		for (int j = 0 ; j<cols ; j++)
	//		{
	//			printf("Enter element a%d%d",i,j);
	//			fflush(stdin); fflush(stdout);
	//			scanf("%d",&mat[i][j]);
	//		}
	//
	//	}
	//	/*transpose Matrix*/
	//	for(int i = 0 ; i<rows ; i++)
	//	{
	//		for(int j=0; j <cols ; j++)
	//		{
	//			transpose[j][i] = mat[i][j];
	//			//printf("%d",transpose);
	//
	//		}
	//	}
	//	//printf("%d" , mat[0][2]);
	//	/*printing The matrix*/
	//	for (int i = 0; i<cols ; i++)
	//	{
	//		for(int j = 0 ; j<rows ; j++)
	//		{
	//			printf("%d ",transpose[i][j]);
	//		}
	//		printf("\n");
	//	}

	/*EX4*/
	//	int mat[50];
	//	int cpymat[50];
	//	int Number; //Number of elements
	//	int element; //element to be inserted
	//	int place;  //Location inserted to
	//	printf("Enter no of elements");
	//	fflush(stdin); fflush(stdout);
	//	scanf("%d",&Number );
	//	for(int i=0;i<Number;i++)
	//	{
	//		scanf("%d",&mat[i]);
	//	}
	//	printf("Enter The Element to be inserted: ");
	//	fflush(stdout); fflush(stdin);
	//	scanf("%d", &element);
	//	fflush(stdout); fflush(stdin);
	//	printf("Enter The location: ");
	//	fflush(stdout); fflush(stdin);
	//	scanf("%d" , &place);
	//	for(int i=0;i<Number;i++)
	//	{
	//		cpymat[i] = mat[i];
	//	}
	//
	//	for(int i = 0;i<Number;i++)
	//	{
	//		if(place == i+1)
	//		{
	//
	//			mat[i] = element;
	//			for(int j = i;j<Number+1;j++)
	//			{
	//				mat[j+1] = cpymat[j];
	//			}
	//			break;
	//
	//		}
	//
	//	}
	//	for(int i =0 ; i<Number+1; i++)
	//	{
	//		printf("%d ",mat[i]);
	//	}
	/*EX5*/

	int mat[50];
	int Number; //Number of elements
	int element; //element to be inserted
	printf("Enter no of elements");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Number );
	/*Enter The Elements*/
	for(int i=0;i<Number;i++)
	{
		scanf("%d",&mat[i]);
	}
	printf("Enter The Element to be Searched: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &element);
	fflush(stdout); fflush(stdin);
	for(int i = 0;i<=Number;i++)
	{
		if(mat[i]==element)
		{
			printf("Number Found at the Location %d:" ,i+1);
			break;
		}
	}



}




