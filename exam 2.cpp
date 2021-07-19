#include<stdio.h>
int main()
{
	int a=1,b=1,c,count=0,i,range;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("%d\t%d\t",a,b);
	for(i=3;i<=range;i++)
	{
		c=a+b;
		a=b;
		b=c;
		count=0;
		for(int i=1;i<=c;i++)
		{
			if(c%i==0)
			count++;
	    }
	        if(count==2)
	        printf("%d\t",c);
	}
	return 0;
}
