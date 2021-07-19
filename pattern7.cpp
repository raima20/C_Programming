#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float n,sum=1,p;
	printf("Enter the range:");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		p=1/pow(i,i);
		sum=sum+p;
	}
	printf("%f",sum);
	return 0;
}
