#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a value:");
	scanf("%d",&a);
	printf("Enter b value:");
	scanf("%d",&b);
	printf("'Bitwise operators'\n");
	
	printf("a&b=%d\n",a&b);
	printf("a|b=%d\n",a|b);
	printf("a^b=%d\n",a^b);
	printf("~a=%d\n",~a);
	printf("~b=%d\n",~b);
	printf("a>>2=%d\n",a>>2);
	printf("b<<3=%d\n",b<<3);
	
	return 0;

	
}
