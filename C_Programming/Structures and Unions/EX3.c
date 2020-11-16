#include<stdio.h>
struct Snumbers
{
	float real_num1;
	float real_num2;
	float img_num1;
	float img_num2;

}res;

float Add ()
{
	float real,imj;
	real = res.real_num1 + res.real_num2;
	imj = res.img_num1 + res.img_num2;
	printf("sum=%.2f+%.2fi",real,imj);
}
void main()
{

	/*First Number*/
	printf("Info about First complex Number:\n ");
	fflush(stdout);
	printf("Enter real Number and imj respectively : ");
	fflush(stdout);
	scanf("%f",&res.real_num1);
	scanf("%f",&res.img_num1);
	/*Second Number*/
	printf("Info about Second complex Number:\n ");
		fflush(stdout);
		printf("Enter real Number and imj respectively : ");
		fflush(stdout);
		scanf("%f%f",&res.real_num2,&res.img_num2);
	Add();


}
