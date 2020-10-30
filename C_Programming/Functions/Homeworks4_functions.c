#include"prototypes.h"
#include<stdio.h>

//EX1
//////////////////////////////////////////////////////////////////////////////
void prime(int num1, int num2 )

{
	int i ;
	int j;
	int result = 0;
	printf("Enter two numbers(intervals):");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num1,&num2);


	if (num2 > num1 )
	{
		printf("prime numbers between %d and %d is  " , num1,num2);
		for (i= num1+1 ; i< num2 ; i++)
		{
			for(j = 2 ; j< i ; j++)
			{
				if (i%j != 0)
				{
					result = i;


				}
				else
				{
					result = 0;

					break;
				}

			}
			if(result != 0)
			{
//				fflush(stdin); fflush(stdout);

				printf("%d " , result);
			}



		}

	}
	else
	{
		printf("prime numbers between %d and %d is  " , num2,num1);
				for (i= num2+1 ; i< num1 ; i++)
				{
					for(j = 2 ; j< i ; j++)
					{
						if (i%j != 0)
						{
							result = i;


						}
						else
						{
							result = 0;

							break;
						}

					}
					if(result != 0)
					{

						printf("%d " , result);
					}


	}
	}

}
/////////////////////////////////////////////////////////////////////////
//EX2
//////////////////////////////////////////////////////////////////////
int factorial(int num1)
{

	if(num1 == 1 || num1 == 0)
	{

		return 1;
	}
	else
	{
		return num1*factorial(num1-1);
	}



}
//////////////////////////////////////////////////////////
