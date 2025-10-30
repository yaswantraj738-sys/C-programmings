#include<stdio.h>
int main()
{
	int n,i,r,factor=0;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
			factor=factor+1;
			i++;
		}
		if(factor==2)
		{
			printf("prime");
		}
		else
		{
			printf("not prime");
		}
		return 0;
   }
}
