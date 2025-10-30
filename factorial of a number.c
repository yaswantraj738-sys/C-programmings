#include<stdio.h>
int main()
{
	int factorial=1,n,i;
	scanf("%d",&n);
	if(n<0)
	{
		printf("invalid");
	}
	else
	{
		for(i=1;i<=n;i++)
		{
		factorial=factorial*i;
         }		
         printf("%d",factorial);
         return 0;
     }
}
