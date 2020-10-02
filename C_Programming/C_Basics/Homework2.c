#include<stdio.h>
void main()
{
	/*EX1*/
//	int num,result;
//	printf("Enter an integer you want to check:");
//	fflush(stdout);
//	fflush(stdin);
//	scanf("%d",&num);
//	result = num % 2;
//	if (result == 0)
//	{
//			printf("%d is even" , num);
//	}
//	else
//	{
//		printf("%d is odd " , num);
//	}

	/*EX2*/
//	char c;
//	printf("Enter an alphabet");
//	fflush(stdout);
//	fflush(stdin);
//	scanf("%c",&c);
//	switch(c)
//	{
//	case 'a':
//	case 'e':
//	case 'o':
//	case 'i':
//	case 'u':
//	case 'A':
//	case 'E':
//	case 'O':
//	case 'I':
//	case 'U':
//
//		printf("%c is a vowel",c);
//		break;
//	default:
//		printf("%c is a constantS" , c);

	/*EX3*/
//	float x,y,z;
//	printf("Enter Three Numbers");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%f %f %f", &x,&y,&z);
//	if (x>y && x>z)
//	{
//		printf("Largest Number = %f " , x);
//	}
//	else if ( y>z && y>x )
//	{
//		printf("Largest Number = %f " , y);
//
//	}
//	else
//	{
//		printf("Largest Number = %f " , z);
//	}
//
	/*EX4*/
//	float num;
//	printf("Enter a number");
//	fflush(stdout);
//	fflush(stdin);
//	scanf("%f" , &num);
//	if(num > 0)
//	{
//		printf("%f is Positive" , num);
//
//	}
//	else if (num < 0)
//	{
//		printf("%f is negative" , num);
//	}
//	else
//	{
//		printf("you entered zero");
//	}
	/*EX5*/
//	char c;
//	printf("Enter a character: ");
//	fflush(stdout);
//	fflush(stdin);
//	scanf("%c" , &c);
//	if(*&c >= 65 && *&c <= 90)
//	{
//		printf("%c is an alphabet" , c);
//	}
//	else if(*&c >= 97 && *&c <= 122)
//	{
//		printf("%c is an alphabet" , c);
//	}
//	else
//	{
//		printf("%c is not an alphabet" , c);
//	}
	/*EX6*/
//	int num,i , sum  = 0;
//	printf("Enter an integer");
//	fflush(stdout);
//	fflush(stdin);
//	scanf("%d" , &num);
//	for(i = 0; i <= num ; i++ )
//	{
//		sum = i +sum;
//
//	}
//	printf("The sum is %d" , sum);

	/*EX7*/
//	int num ,res=1;
//	printf("Enter an integer: ");
//	fflush(stdin);
//	fflush(stdout);
//	scanf("%d", &num);
//	if(num == 0)
//			{
//				printf("Factorial = 1");
//			}
//	if (num < 0)
//			{
//				printf("Error Factorial of a negative number doesn't exist ");
//			}
//	if (num > 0)
//	{
//		for(int i = 1 ; i<=num ; i++)
//		{
//
//				res = res*i;
//		}
//		printf("Factorial is %d" , res);
//	}
	/*EX8*/
	char c;
	float x , y , res = 0;
	printf("Enter operator either + - * /");
	fflush(stdout);
	fflush(stdin);
	scanf("%c" , &c);
	printf("Enter operands: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f %f", &x , &y);
	switch(c)
	{
	case '+':
		res = x+y;
		printf("%f" , res);
		break;
	case '-':
		res = x-y;
		printf("%f" , res);
		break;
	case '*':
		res = x*y;
		printf("%f" , res);
		break;
	case '/':
		res = x/y;
		printf("%f" , res);
		break;
	default:
		printf("Operator isn't found");



	}



	}



