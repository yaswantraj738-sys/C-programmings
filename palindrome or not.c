#include<stdio.h>
int main()
{
	int n,r,t,rev=0;
	printf("enter the number:");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	} n=t;
	if(n=rev)
	{
		printf("pLindrome");
	}
	else
	{
		printf("not palindrome");
	}
	return 0;
}
