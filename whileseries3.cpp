#include<stdio.h>
#include<math.h>
int main()
{
	int sum=0,i=1,range,p=1;
	printf("Enter the range:");
	scanf("%d",&range);
	while(i<=range)
{
	p=pow(i,i);
	sum=sum+p;
	i++;
}
printf("The sum is:%d",sum);
return 0;
}
