#include<stdio.h>
int main()
{
	int a[100],i,n,search;
	printf("Enter how many elements you want to store in an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Which value you want to search:");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==a[i]){
		printf("Elements found in:%d\n",i);
		return 0;
	}
}
	printf("Elements not found!\n");
	return 0;
}
