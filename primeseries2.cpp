#include<stdio.h>
int main()
{
	int i, j,l,u,counter=0;
	printf("Enter the lower number:");
	scanf("%d",&l);
	printf("Enter the upper number:");
	scanf("%d",&u);
	for(i=l;i<=u;i++)
	{
		counter=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			counter++;
		}
		if(counter==2)
	printf("%d\n",i);
}
	return 0;
}
