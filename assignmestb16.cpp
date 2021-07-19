#include<stdio.h>
int main()
{
	int odd,even,n,m;
	printf("Enter the number:");
	scanf("%d",&n);
    m=n%10;
    if(m%2==0)
    printf("The last digit is an even number!");
    else
    printf("The last digit is an odd number!");
    return 0;
}
