#include<stdio.h>

void main()
{
	/*EX1*/
	int m = 29;
	int* pm = &m; /*pointer to int m*/
	printf("Address of m %p\n" , &m);
	printf("Value of m %d\n",m);
	printf("Address of pointer pm %p\n",pm);
	printf("Value inside pm %d\n",*pm);
	m = 34;
	printf("Address of pointer pm %p\n",pm);
	printf("Value inside pm %d\n",*pm);
	*pm = 7;
	printf("Address of pointer pm %p\n",pm);
	printf("Value inside pm %d\n",*pm);



}



