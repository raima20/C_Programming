#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,range,x;
	float p,sum=1.0;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("Enter the number:");
	scanf("%d",&x);
	while(i<range)
{
	p=pow(x,i)/i;
	sum=sum+p;
	i++;
}
printf("THe sum is:%.2f",sum);
return 0;
}


