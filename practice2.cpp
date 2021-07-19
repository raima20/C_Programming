#include<stdio.h>
int main()
{
	int n,r,m,s=0,i=0,x;
	printf("Enter the number:");
	scanf("%d",&n);
	x=n;
	while(n>0)
	{
	r=n%10;
	n=n/10;
	s=(s*10)+r;
	i++;
}
    m=(x-s);
	printf("%d\n",s);
	printf("%d",m);
	return 0;
	}
