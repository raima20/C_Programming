#include<stdio.h>
int main()
{
	char a[100];
	int n,i;
	printf("How many elements you want to store in the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf(" %c",&a[i]);
	}
	printf("The elements in the array:\n");
	/*for(i=0;i<n;i++)
	{
		printf("a[%d]: %c\n",i,a[i]);
	}*/
	printf("%s",a);
	return 0;
}
