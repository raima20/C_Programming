#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value:");
	scanf("%d",&a);
	if(a<0){
		printf("%d",a*(-1));
	}
	else
	printf("%d",a);
	return 0;
}
