#include<stdio.h>
int main()
{
	int a[100],i,j,temp,n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		if(a[j]>a[j+1])
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
}
}
}
for(i=0;i<n;i++)
printf("a[%d]:%d\n",i,a[i]);
return 0;
}
