#include<Stdio.h>
int main()
{
	int i,j;
	i=0,j=0;
	while(++i<=5)
	{
		while(++j<=5)
		{
			printf("%d--> %d\n",j,i,j);
		}
	}
	return 0;
}
