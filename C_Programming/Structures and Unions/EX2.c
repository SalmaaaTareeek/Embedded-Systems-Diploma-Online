#include<stdio.h>

/*EX1*/
struct Sdistances
{
	float distance1_feet;
	float distance2_feet;
	float distance1_inch;
	float distance2_inch;

};
void main()
{
	struct Sdistances distances;
	/*Info about First Distance*/
	printf("Enter information of First Distance:");
	fflush(stdout);
	printf("Enter Feet:");
	fflush(stdout);
	scanf("%f",&distances.distance1_feet);
	fflush(stdout);
	printf("Enter Inch");
	fflush(stdout);
	scanf("%f",&distances.distance1_inch);
	/*Info about Second Distance*/
	printf("Enter information of Second Distance:");
		fflush(stdout);
		printf("Enter Feet:");
		fflush(stdout);
		scanf("%f",&distances.distance2_feet);
		fflush(stdout);
		printf("Enter Inch");
		fflush(stdout);
		scanf("%f",&distances.distance2_inch);

	float sum_feet = distances.distance1_feet + distances.distance2_feet;
	float sum_inch = distances.distance1_inch + distances.distance2_inch;
	if(sum_inch > 12)
	{
		printf("sum of distances = %.0f'-%.1f''",sum_feet+1,(sum_inch-12));
	}
	else
	{
		printf("sum of distances = %f.0'-%.1f''",sum_feet,sum_inch);

	}





}
