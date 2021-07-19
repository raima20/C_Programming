#include<stdio.h>
void num(int n)
{
	if(n%2==0)
	printf("Even number!");
	else
	printf("Odd number!");
}
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
    num(n);
    return 0;
}
