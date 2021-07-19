/*factorial*/
#include<stdio.h>
int main()
{
	int mult=1,i,range;
	printf("Enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		mult=mult*i;
	}
	
	printf("The factorial is:%d\n",mult);
	return 0;
}
