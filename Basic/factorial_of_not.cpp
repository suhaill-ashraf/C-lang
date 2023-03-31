#include<stdio.h>
int fact(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
		
	}
	return f;
}
int main()
{
	int n,f=1;
	printf("Enter number:");
	scanf("%d",&n);
	f=fact(n);
	printf("\n factorial of %d is:%d",n,f);
	return 0;
	
}
