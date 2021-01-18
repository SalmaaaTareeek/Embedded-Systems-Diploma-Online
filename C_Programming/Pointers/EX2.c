#include<stdio.h>

void main()
{
	/*EX2*/
	char alphabet[25];
	int i;
	int j =0;
	for(i=65;i<=90;i++)
	{
		alphabet[j] = i;
		j++;
	}
	char* palphabet = alphabet;
	for(i=0;i<25;i++)
	{
		printf("%c",*palphabet);
		palphabet++;
	}







}



