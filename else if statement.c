#include<stdio.h>
int main()
{
	int days;
	scanf("%d",&days);
	
	if(days==1)
	{
		printf("sunday");
	}

	else if(days==2);
		{
			printf("monday");
		}
		else if(days==3);
		   {
		   
			printf("tuesday");
		 }
		else if(days==4);
		{
			printf("wednesday");
		}
		else if(days==5);
		{
			printf("thursday");
		}
		else if(days==6);
		{
			printf("friday");
		}
		else if(days==7);
		{
			printf("saturday");
		}
		else if(days>7);
			{
				printf("%d is invalid");
			}
		}
		
	
	return 0;
}
