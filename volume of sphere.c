#include<stdio.h>
#include<math.h>
int main()
{
	int r;
	float PI=3.14,volume;
	scanf("%d",&r);
	volume=4/3*PI*r*r*r;
	printf("the volume of sphere : %.2f",volume);
	return 0;
}
