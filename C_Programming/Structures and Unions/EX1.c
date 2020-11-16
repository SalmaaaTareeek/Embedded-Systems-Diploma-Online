#include<stdio.h>

/*EX1*/
struct Sstudent
{
	unsigned char name[50];
	unsigned int roll;
	float degree;
};

void main()
{
	struct Sstudent student[50];
	int i;
	printf("Enter information of a student:\n ");
	fflush(stdout);
	printf("Enter Name: ");
	fflush(stdout);
	scanf("%s",&student[0].name);
	fflush(stdout);
	printf("Enter Roll:");
	fflush(stdout);
	scanf("%d",&student[0].roll);
	fflush(stdout);
	printf("Enter Degree:");
	fflush(stdout);
	scanf("%f",&student[0].degree);
	printf("Displaying Information\n");
	printf("Name: %s \n", student[0].name);
	printf("roll: %d \n", student[0].roll);
	printf("degree: %.1f \n", student[0].degree);



}
