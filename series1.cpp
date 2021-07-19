#include<stdio.h>
#include<math.h>
	int main()
	{
	
	int sum=1,i,range,p=1;
	printf("Enter the range:");
	scanf("%d",&range);
	
	for(i=1;i<range;i++)
	{
		printf("%d +",p);
		p=pow(10,i)+p;
		
		
	}
	printf("\nthe sum is: %d",sum);
	return 0;
	
}
