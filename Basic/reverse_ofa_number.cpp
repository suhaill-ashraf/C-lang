#include<stdio.h>
int main()
{
	int n,r,reverse=0,temp;
	printf("\n Enter number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		reverse=(reverse*10)+r;
		n=n/10;
		
	}
	printf("\n reverse of given number %d is %d",temp,reverse);
	return 0;
	
}
