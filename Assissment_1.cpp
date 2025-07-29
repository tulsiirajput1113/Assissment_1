#include<stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int main()
{
	int a,b,c;
	
	printf("----menu----\n");
	printf("1.Arithmatic\n");
	printf("2.subtraction\n");
	printf("3.Multiplication\n");
	printf("4.division\n");
	printf("\n");
	
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("enter your choice");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
			printf("Ans of arithmatic:%d\n",sum(a,b));
			break;
		case 2:
			printf("Ans of subtraction:%d\n",sub(a,b));
			break;
		case 3:
			printf("Ans of multiplication:%d\n",mul(a,b));
			break;
		case 4:
			printf("Ans of division:%d\n",div(a,b));
			break;
		default:
			printf("invalid input");
			
	}
	return 0;
}
int sum(int a,int b)
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
int div(int a,int b)
{
	return a/b;
	
}

