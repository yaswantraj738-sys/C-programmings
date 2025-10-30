#include<stdio.h>
int main()
{
	int a,b,B;
	
	printf("Initial value of a:");
	 scanf("%d",&a);
	
	       printf("After pre increment(b=++a)=%d\n,a=%d\n",b=++a,a);
	        printf("After post increment(b=a++)=%d\n,a=%d\n",b=a++,a);
	         printf("After pre decrement(B=--a)=%d\n,a=%d\n",B=--a,a); 
	          printf("After post decrement(B=a--)=%d\n,a=%d\n",B=a--,a);
	          
	          return 0;
	       
		   
}
