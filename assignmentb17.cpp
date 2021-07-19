#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float p;
	printf("Enter the number:");
	scanf("%d",&n);
	p=sqrt(n);
	i=p;
	if(p==i){
		printf("It is a perfect square number!");
	}
	else
	printf("It is not a square number!");
	return 0;
}
