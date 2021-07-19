#include<stdio.h>
#include<math.h>
int add(int range)
{
	int i,p;
	for(i=1;i<=range;i++)
	{
		p=pow(i,2);
	}
	return p;
}
int main()
{
	int range,s;
	printf("Enter thr range:");
	scanf("%d",&range);
	s=add(range);
	printf("%d\n",s);
	return 0;
}
