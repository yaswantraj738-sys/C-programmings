#include<stdio.h>
main()
{
	int p;
	int t;
	float R;
	float SI;
	printf("Enter the value of p:");
	scanf("%d",&p);
	printf("Enter the value of t:");
	scanf("%d",&t);
	printf("Enter the value of R:");
	scanf("%f",&R);
	SI=p*t*R/100;
	printf("%f",SI);
}
