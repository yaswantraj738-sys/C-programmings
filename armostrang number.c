#include<Stdio.h>
int main()
{
	int n,r,c,sum=0,t;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
	r=n%10;
	c=r*r*r;
	sum=sum+c;
	n=n/10;
    }
    n=t;
    if(n==sum)
    printf("Armostrang number");
    else
    printf("Not Armostrang number");
    return 0;
}
