#include<stdio.h>
#include<string.h>

void main()
{
/*EX4*/
	int num[5];
	int i ;
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	int* pnum = num;

	for(i=0;i<5;i++)
	{
		pnum++;

	}
	pnum--;
	for(i=5;i>0;i--)
	{
		printf("%d\t",*pnum);
		pnum--;
	}







}



