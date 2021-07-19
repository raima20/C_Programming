#include<stdio.h>
#include<math.h>
int main()
{
	int a,i=1,x,j,range;
	float sum=1,p,mult=1;
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
	  sum=sum+p;
	  i++;
}
printf("The sum is:%f",sum);
return 0;
}
