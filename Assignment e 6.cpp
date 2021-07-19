#includeinclude<stdio.h>
#include<conio.h>
int add(int x)
{
	int p,sum=0;
    while(x>0)
	{
		p=x%10;
		x=x/10;
		sum=sum+p;
	}
		return sum;
}
	int main()
	{
		int x,v;
		printf("enter 5 digit number");
	    scanf("%d",&x);
	    v=add(x);
	    printf("the add:%d",v);
	    return 0;
	}
