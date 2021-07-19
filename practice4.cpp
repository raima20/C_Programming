#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,r,n,sum=0,p;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum+r;
		p=pow(sum,2);
		i++;
	}
	printf("%d\n",sum);
	printf("%d",p);
	return 0;
}
