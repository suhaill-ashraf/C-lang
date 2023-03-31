#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value of A:");
	scanf("%d",&a);
	printf("Enter value of B:");
	scanf("%d",&b);
	printf("\n before swapping value of A is %d and value of B  is %d ",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After swapping value of A is %d and value of B  is %d ",a,b);
	
	
	
	
		
}
