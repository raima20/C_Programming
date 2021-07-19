#include<stdio.h>
int fact(int range)
{
	int i,j;
	float mult=1,sum=0,p;
	for(i=1;i<=range;i++){
		mult=1;
		for(j=1;j<=i;j++)
		mult=mult*j;
		p=i/mult;
		sum=sum+p;
		return sum;
	}
	}
	int main()
	{
		int s,range;
		printf("Enter the range:");
		scanf("%d",&range);
		s=fact(range);
		printf("%d",s);
		return 0;
	}
