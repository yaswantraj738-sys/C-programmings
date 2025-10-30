#include<stdio.h>
int main()
{
	int a=4,b=3,c=7;
	printf("a>b&&c>a:%d\n",(a>b&&c>a));
		printf("a<b&&c>a:%d/n",(a<b&&c<a));
			printf("a!=b&&c>a:%d\n",(a!=b&&c!=a));
				printf("a>0||b<0||c>0:%d\n",(a>0||b<0||c>0));
					printf("a>b||c>=a:%d\n",(a>=b||c>=a));
						printf("a<=b||c<=a:%d\n",(a<=b||c<=a));
						return 0;
}
