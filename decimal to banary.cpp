#include<stdio.h>
int main()
{
	int s=0,temp=1,n,r;
	printf("enter the number");
	scanf("%d",&n);
    while(n>0)
    {
    	r=n%2;
    	n=n/2;
    	s=s+(temp*r);
    	temp=temp*10;
	}
	printf("print the value of s:%d",s);
	return 0;
}
