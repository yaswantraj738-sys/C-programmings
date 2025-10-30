#include<stdio.h>
int main()
{
	int a=12,b=4,c=3,d=6,e;
	e=a/b*c-b+a*d/3;
	printf("%d\n",e);
	
	int j,i=5;
	j=(i++)+(++i);
	printf("after expression ii:\n");
	printf("i=%d\n",i);   //i=5+1=6+1=7   j=5+7=12//      
	printf("%d\n",j);
	 return 0;
}


