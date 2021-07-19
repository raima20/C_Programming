#include<stdio.h>
int main()
{
	int p,q,temp;
	printf("Enter the value of p:");
	scanf("%d",&p);
	printf("Enter the value of q:");
	scanf("%d",&q);
	temp=p;
	p=q;
	q=temp;
	printf("p=%d\tq=%d",p,q);
	return 0;
}
