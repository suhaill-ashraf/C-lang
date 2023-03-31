#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n Enter three integer numbers:");
	scanf("%d%d%d",&a,&b,&c);
    printf("\n %d is grater",(a>b && a>c)?a:(b>c)?b:c);	
	
}
