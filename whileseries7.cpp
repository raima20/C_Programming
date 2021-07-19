#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,range,x;
	float sum1=1,sum2=0,p;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("Enter the number:");
	scanf("%d",&x);
	while(i<range)
	{
		p=pow(x,i)/i;
		if(i%2==0){
		sum1=sum1+p;	
		}
		else{
		sum2=sum2-p;	
		}
		i++;
	}
	printf("The sum is:%f",sum1+sum2);
	return 0;
}
