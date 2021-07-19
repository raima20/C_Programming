#include<stdio.h>
void odd(int n)
{
	int i;
	for(i=1;i<=n;i++){
		if(i%2!=0)
		printf("%d\n",i);
	}
}
int main()
{
	int n;
	printf("Enter the range:");
	scanf("%d",&n);
	odd(n);
	return 0;
}
