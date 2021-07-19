#include<stdio.h>
int main()
{
	int a[100],i,n,search;
	printf("how many elements you want to store in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the number you want to search:");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
		printf("found:%d",i);
		return 0;
	}
}
 printf("not found:%d");
 return 0;
}
