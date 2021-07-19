#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float range,x,s=1,j,p,mult=1,sum1=0,sum2=0;
	printf("enter the range");
	scanf("%f",&range);
	printf("enter the number");
	scanf("%f",&x);
    for(i=1;i<=range;i++)
	{
		mult=1;
	  for(j=1;j<=s;j++)
	{
		mult=mult*j;
	}
	p=pow(x,s)/mult;
	s=s+2;
	if(i%2!=0)
	sum1+=p;
	else
	sum2-=p;
}
printf("The sum is %f",sum1+sum2);
return 0;
}
