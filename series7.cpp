/*1-x+x^2/2-x^3/3+x^4/4....*/
#include<stdio.h>
#include<math.h>
int main()
{
	float sum1=1,sum2=0,p;
	int i,range,x;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("Enter the number:");
	scanf("%d",&x);
	for(i=1;i<range;i++)
	{
		p=pow(x,i)/i;
		if(i%2==0){
		sum1=sum1+p;
		}
		else{
		sum2=sum2-p;
		}
	}
	
	printf("The sum is:%f",sum1+sum2);
	return 0;
}
