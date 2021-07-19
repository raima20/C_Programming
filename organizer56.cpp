#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%10!=0)
		printf("%d\t",i);
	}
	return 0;
}
