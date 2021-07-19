#include<stdio.h>
#include<math.h>
float add(float range)
{
	int i;
	float sum=0,num=1,denum=2;
	for(i=1;i<=range;i++)
	{
		sum=sum+num/denum;
		num=num+2;
		denum=denum+3;
	}
	return sum;
}
int main()
{
	float range;
	float s;
	printf("Enter the range:");
	scanf("%f",&range);
	s=add(range);
	printf("%f",s);
	return 0;
}
