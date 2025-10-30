#include<stdio.h>
int main()
{
	float p,t,r,ci;
	scanf("%f %f %f",&p,&t,&r);
	ci=p*(1+r/100)-p;
	printf("%.2f\n",ci);
	return 0;
}
