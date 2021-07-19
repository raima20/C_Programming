#include<stdio.h>
int main()
{
	int i=1,range,mult=1;
	printf("Enter the range:");
	scanf("%d",&range);
	while(i<=range)
{
	mult=mult*i;
	i++;
}
printf("The mult is:%d",mult);
return 0;
}
