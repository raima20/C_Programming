#include<stdio.h>
int main()
{
	int a,b,c,t;
	printf("Enter the numbers:");
	scanf("%d\n%d\n%d\n",&a,&b,&c);
	if(a>b&&a>c){
		printf("%d",a);
	}
	else if(b>c&&b>a){
		printf("%d",b);
	}
	else
	{
		printf("%d",c);
	}
	return 0;
}
