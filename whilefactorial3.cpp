#include<stdio.h>
#include<math.h>
int main()
{
	int range,x,i=1,j;
	float sum1=1,sum2=0,p,mult=1;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("Enter the number:");
	scanf("%d",&x);
	while(i<range)
	{
		mult=1,j=1;
		while(j<=i)
		{
			mult=mult*j;
			j++;
		}
		p=pow(x,i)/mult;
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
