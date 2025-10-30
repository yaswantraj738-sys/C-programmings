#include<stdio.h>
int main()
{
	int a;
	printf("Enter a value:");
	scanf("%d",&a);
	int b;
	printf("Enter b value:");
	scanf("%d",&b);
	int c,d,e,f,g;
	c=a+b;
	printf("Addition:%d",c);
	d=a-b;
	printf("Subtraction:%d",d);
	e=a*b;
	printf("Multiplication:%d",e);
	f=a/b;
	printf("Division:%d",f);
	g=a%b;
	printf("Modulus:%d",g);
}

