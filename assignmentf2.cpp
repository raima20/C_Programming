#include<stdio.h>
int main()
{
	int a[10],posi=0,nega=0,n,i,even=0,odd=0,min=0,max=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		posi++;
		else if(a[i]<0)
		nega++;
		if(a[i]%2==0)
		even++;
		else
		odd++;
		if(a[i]<min)
		min=a[i];
	    if(a[i]>max)
	    max=a[i];
	}
	printf("number of positive numbers:%d\n",posi);
	printf("number of negative numbers:%d\n",nega);
	printf("number of even numbers:%d\n",even);
	printf("number of odd numbers:%d\n",odd);
	printf("largest number:%d\n",max);
	printf("smallest number:%d\n",min);
	return 0;
}
