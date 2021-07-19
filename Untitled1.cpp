#include<stdio.h>
#include<math.h>
int main()
{
	int i,range,p=1;
	printf("Enter the range:");
	scanf("%d",&range);
	for(i=1;i<range;i++)
	{
		printf("%d+",p);
		p=pow(10,i)+p;
	}
	printf("The sum is:%d",p);
	return 0;
}
