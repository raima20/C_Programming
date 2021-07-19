/*1^1+2^2+3^3+...*/
#include<stdio.h>
#include<math.h>
int add(int range)
{
	int i,p,sum=0;
	for(i=1;i<=range;i++)
	{
		p=pow(i,i);
		sum=sum+p;
	}
	return sum;
}
   int main()
   {
   	int s,range;
   	printf("Enter the range:");
   	scanf("%d",&range);
   	s=add(range);
   	printf("%d",s);
   	return 0;
   }

