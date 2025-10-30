#include<stdio.h>
int main()
{
	int a;
	printf("Initial value a:");
	scanf("%d",&a);
	a+=5;
	printf("After a+=5,a=%d/n",a);
	a-=3;
	printf("After a-=3,a=%d/n",a);
	a*=4;
	printf("After a*=4,a=%d/n",a);
	a/=4;
	printf("After a/=4,a=%d/n",a);
	a%=6;
	printf("After a%=6,a=%d/n",a);
	return 0;
}
