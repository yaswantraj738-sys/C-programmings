#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a value:");
	scanf("%d",&a);
	
        printf("Enter b value:");
		scanf("%d",&b);
		
		    printf("Enter c value:");
			scanf("%d",&c);
			
			   printf("The biggest value is:%d\n",(a>b)?(a>c?a:c):(b>c?b:c));
			   
			   return 0;	
}
