#include<stdio.h>
#include<math.h>
int main()
{
	int range,i,x,p,sum1=1,sum2=0;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("Enter the number:");
	scanf("%d",&x);
	for(i=1;i<range;i++)
	{
		p=pow(x,i);
		
			if(i%2==0)
			sum1=sum1+p;
			
			else
			sum2=sum2-p;
	}
		printf("The sum is:%d",sum1+sum2);
		return 0;	
		
	
}
