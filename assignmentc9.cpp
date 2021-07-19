#include<stdio.h>
int main()
{
	int odd=1,sum=0,range,i;
	printf("Enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++){
	sum=sum+odd;
	odd=odd+2;
}
printf("The sum is:%d",sum);
return 0;
}
