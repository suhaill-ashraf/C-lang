#include<stdio.h>
//Function defintion's
int add( int a,int b)
{

	return a+b;
	
}
int sub(int a,int b)
{
	return a-b;
	
}
int mul(int a,int b)
{
	return a*b;
	
}
float div(int a,int b)
{
	if(b==0)
	{
		return 0;
	}
  return a/(float)b;
}
float mod(int a,int b)
{
	
  return a%b;
}
//Function to return choice 
int menu()
{
	int choice;
	printf("\n Enter 1 for addition :");
	printf("\n Enter 2 for subtraction :");
	printf("\n Enter 3 for Multiplication :");
	printf("\n Enter 4 for Division :");
	printf("\n Enter 5 for Modulus :\n");
	scanf("%d",&choice);
	return choice;
	
}
int main()
{
	int a,b,c;
	float m;
	char choice=0;
	do{
	
	printf("\n Enter two numbers:");
	scanf("%d %d",&a,&b);
    switch(menu())
    {
    	case 1:
		c=add(a,b);
		printf("\n Addition of Two NUmbers is :%d",c);
		break;
	    case 2:
		c=sub(a,b);
		printf("\n Subtraction of Two NUmbers is :%d",c);
		break;
		case 3:
		c=mul(a,b);
		printf("\n Multiplication of Two NUmbers is :%d",c);
		break;
		case 4:
		m=div(a,b);
		if(m==0)
		{ 
		 printf("\n Arithematic Exception(Divide by 0)");
		}else
		{
		
		printf("\n Division of Two NUmbers is :%.2f",m);
	    }  
		break;
		case 5:
		c=mod(a,b);
		printf("\n Modulus of Two NUmbers is :%d",c);
		break;
		default : printf("\n Enter valid option");
		break;
	}
	printf("\n would you like to continue:(Y/N)\n");
	scanf(" %c",&choice);
	if(choice=!'y' || choice !='Y'){
		printf("\n thank you !");
	}
	
}while(choice=='y' || choice=='Y');
	
}

	

