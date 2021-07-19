#include<stdio.h>
int main()
{
	int range,i,a=1,b=1,c;
	printf("Enter the range:");
	scanf("%d",&range);
	//printf("%d\t%d\t",a,b);
	for(i=1;i<=range;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	
	}
	return 0;
	
}
