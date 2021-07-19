#include<stdio.h>
#include<math.h>
int main()
{
	float n,a[100],num=2,denum=3,p;
	int i;
	printf("Enter the range:");
	scanf("%f",&n);
	for(i=0;i<n;i++)
	{
	  p=(num/denum);
	  num=num+3;
	  denum=denum+5;
	  a[i]=p;	
	}
	printf("The numbers are:\n");
	for(i=0;i<n;i++)
	printf("a[%d]: %.2f\n",i,a[i]);
	return 0;
}
