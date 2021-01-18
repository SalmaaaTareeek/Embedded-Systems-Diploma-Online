#include<stdio.h>
#include<string.h>

void main()
{
/*EX3*/
	char word[50];
	gets(word);
	char *pword = word;
	int i ;
	/*For making the pointer goes to the last letter*/
	for(i=0;i<strlen(word);i++)
	{
		if(word[i] != 0L)
		{
			pword++;
		}


	}
	pword--; /*as it will jumb a letter before Null*/
	/*for reverse*/
	for(i=0;i<strlen(word);i++)
	{

		printf("%c",*pword);
		pword--;
	}



}



