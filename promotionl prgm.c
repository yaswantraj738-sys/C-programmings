#include<stdio.h>
int main()
{
	int x=10,i;
	float y;
	y=x;
	printf("%f\n",y);//successful
	
	char c='A';
	 i=c;
	 printf("%d\n",i);//successful
	 
	 int I=65;
	 char G;
	 G=I;
	 printf("%d\n",G);//successful
	 
	 
	 
	 int D=650;
	 char F;
	 F=D;
	 printf("%c\n",F);//unsuccessful
	 
	 return 0;
}
