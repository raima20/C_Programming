#include<stdio.h>
int main()
{
	int i,j,k,n;
	char a='A';
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a='A';
		for(j=i;j<=n;j++)
		printf("%c",a++);
		for(j=1;j<=(2*i-2);j++)
		printf(" ");
		
		for(j=i;j<=n;j++)
		printf("%c",--a);
		printf("\n");
	}
	return 0;
}
