#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,distance;
	scanf("%f %f %f %f",&x1,&x2,&y1,&y2);
	distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y2));
	printf("%.4f",distance);
	return 0;
	
}
