#include<stdio.h>

/*EX4*/
struct Sstudent
{
	char name[50];
	unsigned int roll;
	float degree;
};

void main()
{
	struct Sstudent student[10];
	int i;
	printf("Enter information of a student:\n ");
	for(i=0;i<10;i++)
	{

		fflush(stdout);
		printf("Enter Name: ");
		fflush(stdout);
		scanf("%s",&student[i].name);
		fflush(stdout);
		printf("Enter Roll:");
		fflush(stdout);
		scanf("%d",&student[i].roll);
		fflush(stdout);
		printf("Enter Degree:");
		fflush(stdout);
		scanf("%f",&student[i].degree);
		fflush(stdout);
		fflush(stdin);

	}
	printf("Displaying Information\n");
	for(i=0;i<10;i++)
	{
			printf("Name:%s \n", student[i].name);
			printf("roll:%d \n", student[i].roll);
			printf("degree:%.1f \n", student[i].degree);

	}






}
