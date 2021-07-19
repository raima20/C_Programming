#include<stdio.h>
void binary(int n)
{
	int a[100],p,i=0,j;
	while(n>0)
	{
	a[i]=n%2;
	n=n/2;
	i++;
}
	for(j=i-1;j>=0;j--)
printf("%d",a[j]);

}
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	binary(n);
	return 0;
}
