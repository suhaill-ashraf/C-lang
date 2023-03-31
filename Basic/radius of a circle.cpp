#include<stdio.h>
#define PI 3.14
int main()
{
	float radius,area;
	printf("\n Enter Radius of circle:");
	scanf("%f",&radius);
	area=PI*radius*radius;
	printf("\n Area of circle is %f",area);
}
