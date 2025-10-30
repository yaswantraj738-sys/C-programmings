#include<stdio.h>
int main()
{
	int a=5;
	float b;
	b=a;   //promotional (always successfull)
	printf("b=%f\n",b);
	float c=2.532;
	int d;
	d=c;     //demotional (may or may not sucessfull)
	printf("d=%d\n",d);
	char ch;
	ch=650;
	printf("%c\n",ch);
	
	return 0;
	
}
