#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	printf("enter the value");
	scanf("%f",&a);
	b=sqrt(a);
	printf("square root of a=%f",a>0?b:a);
	return 0;
	
}
