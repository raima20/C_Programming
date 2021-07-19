#include<stdio.h>
int main()
{
	int a[100],i,n,p,count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\na[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the value you want to find:");
	scanf("%d",&p);
	for(i=0;i<n;i++)
	printf("a[%d]: %d\n",i,a[i]);
	for(i=0;i<n;i++)
	{
		if(p==a[i])
		{
			printf("\nThe number is found at:%d",i);
			count++;
		}
	}
	if(count==0)
	printf("\nNot found");
	else
	printf("\n%d occured %d times",p,count);
	
	return 0;
	
}


