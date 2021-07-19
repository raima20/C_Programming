#include<stdio.h>
int main()
{
	int arr[10],i,small,large,sum=0;
	printf("Enter the elements:");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	small=arr[0];
	large=arr[0];
	for(i=0;i<10;i++)
	{
		if(small>arr[i])
		small=arr[i];
	}
	if(large<arr[i])
	large=arr[i];
//	sum=large+small;
//	printf("The sum is:%d",sum);
	return 0;
}
