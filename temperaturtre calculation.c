#include<stdio.h>
int main()
{
	float c,fh;
	printf("enter the temperature:");
	scanf("%f",&c);
	fh=(c*9/0.5)+32;
	printf("temperature in farhenheit:%f\n",fh);
	printf("enter the temperature:");
	scanf("%f",&fh);
	c=(fh-32)*5/9;
	printf("temperature in centigrade:%f\n",c);
	
	return 0;
}
