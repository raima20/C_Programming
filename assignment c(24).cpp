#include<stdio.h>
int main()
{
	int range,count=0,i,w=1,x=1,y;
	printf("enter the range");
	scanf("%d",&range);
	printf("%d\t%d\t",w,x);
	for(i=3;i<=range;i++)
	{
		y=w+x;
		w=x;
		x=y;
		count=0;
		for(i=1;i<=w;i++)
		{
			if(w%i==0)
			count++;
		}
		if(count==2)
		printf("%d\t",w);
	}
		return 0;
	}
		
