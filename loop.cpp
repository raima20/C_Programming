//AP series*
#include<stdio.h>
int main()
{
	int range,a,cd,i;
	printf("Enter the range :");
	scanf("%d",&range);
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the common difference:");
	scanf("%d",&cd);
	for(i=1;i<=range;i++)
	{
		printf("The number is %d\n",a);
		a=a+cd;
	}
	
     
     return 0;
 }
 
