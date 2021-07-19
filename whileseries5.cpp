#include<stdio.h>
#include<math.h>
int main()
{
	int sum=1,i=1,range,x,p,a=1;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("Enter the number:");
	scanf("%d",&x);
	while(i<range)
{
	p=pow(x,a);
	a=a+2;
	sum=sum+p;
	i++;
}
printf("The sum is:%d",sum);
return 0;
}
