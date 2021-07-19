#include<stdio.h>
int main()
{
	int a[10]={0},b[10]={0},i,n,j=0,k=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int m;
		scanf("%d",&m);
		if(m<0)
		a[j++]=m;
		else
		b[k++]=m;
	}
	if(j>0){
	printf("\nnegative elements\n");
	for(i=0;i<j;i++)
	printf("%d\t",a[i]);
}
if(k>0){
	printf("\nPositive elements\n");
	for(i=0;i<k;i++)
	printf("%d\t",b[i]);
}
	return 0;
}
