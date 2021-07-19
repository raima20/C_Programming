#include<stdio.h>
int main()
{
	int range,i,a,cd;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the common diffrence:");
	scanf("%d",&cd);
	for(i=0;i<=range;i++)
	{
		printf("The number is %d\n",a);
		    a=a+cd;
	}
	    return 0;
	}

