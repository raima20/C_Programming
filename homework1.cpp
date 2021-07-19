/*1/1+1/1+2+1/1+2+3+......n*/
#include<stdio.h>
int main()
{
	float i,n,sum=0,add=0,j;
	printf("Enter the range:");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
	  for(add=0,j=1;j<=i;j++)
	  add=add+j;
	  sum +=(1/add);	
	}
	printf("%.2f",sum);
	return 0;
}
