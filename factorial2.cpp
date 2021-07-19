/*1+x+x^2/2!+x^3/3!+x^4/4!.....upto n*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,x,j,range;
	float sum=1,p,mult=1;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("Enter the number:");
	scanf("%d",&x);
	for(i=1;i<range;i++)
	{
		for(mult=1,j=1;j<=i;j++)
		{
			mult=mult*j;
		}
		p=pow(x,i)/mult;
		sum=sum+p;
	}
	printf("The sum is:%f",sum);
	return 0;
		
	
}
