#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("\n Enter number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum+=r;
		n=n/10;
		
	}
	printf("\n reverse of given number %d is %d",temp,sum);
	return 0;
	
}
