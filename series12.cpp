#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,p;
	printf("Enter the number:");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",a,i,a*i);
	}
	return 0;
}
