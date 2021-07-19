/*1/2+3/5+5/8.....upto n*/
#include<stdio.h>
#include<math.h>
int main()
{
	int range,i;
	float sum=0,num=1,denum=2;
	printf("Enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		sum=sum+num/denum;
		num=num+2;
		denum=denum+3;
	
	}
	printf("The sum is:%f",sum);
	return 0;
	}
