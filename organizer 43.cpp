#include<stdio.h>
int main()
{
	int i=0,n,r,sum=0,m;
	printf("Enter the number:");
	scanf("%d",&n);
	m=n;
	while(m>0)
	{
		r=m%10;
		m=m/10;
		sum=(sum*10)+r;
		i++;
	}
	printf("%d",sum);
	return 0;
}
