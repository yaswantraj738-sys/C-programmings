#include<Stdio.h>
int main()
{
	int a,b,c,n,i;
	scanf("%d",&n);
	a=0;
	b=0;
	for(i=1;i<=n;i++)
	{
      printf("%d",a);
      c=a+b;
      a=b;
      b=c;
    }
    return 0;
}
