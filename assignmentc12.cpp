#include<stdio.h>
int main()
{
	int i,range,j;
	float mult=1,sum=0,p;
	printf("Enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++){
		mult=1;
		for(j=1;j<=i;j++)
		mult=mult*j;
		p=i/mult;
		sum=sum+p;
	}
	printf("The sum is:%.2f",sum);
	return 0;
}
