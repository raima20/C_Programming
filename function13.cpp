/*1-x+x^2/2-x^3/3+x^4/4....*/
#include<stdio.h>
#include<math.h>
float add(float range,float x)
{
	float sum1=1,sum2=0,p;
	int i;
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
		return sum1+sum2;
	
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
