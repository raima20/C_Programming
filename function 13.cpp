#include<stdio.h>
#include<math.h>
float add(float range,float x)
{
	int i;
	float p,sum=1.0;
	for(i=1;i<range;i++)
	{
		p=pow(x,i)/i;
		sum=sum+p;
	}
	return sum;
}
int main()
{
	float range,x;
	float s;
	printf("Enter the range:");
	scanf("%f",&range);
	printf("Enter the number:");
	scanf("%f",&x);
	s=add(range,x);
	printf("%.2f",s);
	return 0;
}
