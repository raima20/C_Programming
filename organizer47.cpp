#include<stdio.h>
int main()
{
	int a,b,c,t;
	printf("Enter the numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	(a>b && a>c)?t=a:(b>a && b>c)?t=b:t=c;
	printf("%d",c);
	return 0;
}
