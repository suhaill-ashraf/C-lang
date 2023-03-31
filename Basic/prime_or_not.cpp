#include<stdio.h>
#include<math.h>
int main()
{
	int n,flag=0;
	printf("\n Enter number:");
	scanf("%d",&n);
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			printf("%d is not a prime number",n);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n %d is prime",n);
	}
}
