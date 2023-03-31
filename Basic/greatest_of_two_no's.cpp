#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Enter two integer numbers:");
	scanf("%d%d",&a,&b);
	(a==b)?printf("\n both are same"):printf("\n%d is grater",(a>b)?a:b);	
}
