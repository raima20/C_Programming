#include<stdio.h>
#include<math.h>
int main()
{
	int sum=1,i=1,range,p=1;
	printf ("Enter the range:");
	scanf("%d",&range);
	while(i<range)
	{
		printf("%d +",p);
		p=pow(10,i)+p;
		
	
	
		sum=sum+p;
		i++;
}
	printf("\nThe sum is:%d",sum);
	return 0;
}
