#include<stdio.h>
int main()
{
	int n,x;
	printf("Enter the number:");
	scanf("%d",&n);
    x=n%2;
    n=n/2;
    if(x%2==0)
    printf("Even number!");
    else
    printf("Odd number!");
    return 0;
	 
}
