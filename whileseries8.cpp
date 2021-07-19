#include<stdio.h>
#include<math.h>
int main()
{
	int range,i=1;
	float sum=0,num=1,denum=2;
	printf("Enter the range:");
	scanf("%d",&range);
	while(i<=range)
	{
		sum=sum+num/denum;
		num=num+2;
		denum=denum+3;
		i++;
	}
	printf("The sum is:%f",sum);
	return 0;
}
