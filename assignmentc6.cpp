#include<stdio.h>
int main()
{
	int i,x,sum=0;
	printf("The numbers are:");
	for(i=1;i<=500;i++)
	x=1;
	while(x<=i/2){
		if(i%x==0)
		sum=sum+x;
		x++;
	}
	if(sum==i)
	printf("%d",i);
}
