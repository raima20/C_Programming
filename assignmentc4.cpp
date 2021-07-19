#include<stdio.h>
int main()
{
	int a,b,i,mult=1;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	for(i=1;i<=b;i++){
	mult=mult*a;
}
printf("The result is:%d",mult);
return 0;
	
}
