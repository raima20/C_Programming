#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
	int *a,max=INT_MIN,min=INT_MAX,n,i;
	printf("Enter the range:");
	scanf("%d",&n);
	a = (int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++)
	printf("a[%d]:%d\n",i,*(a+i));
	for(i=0;i<n;i++)
	{
	if(max<a[i])
	max=a[i];
	if(min>a[i])
	min=a[i];
}
printf("The minimum number is:%d\n",min);
printf("The maximum number is:%d",max);
return 0;
}
