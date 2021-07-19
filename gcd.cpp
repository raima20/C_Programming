#include<stdio.h>
int main()
{
	int n1,n2,gcd=1,i;
	printf("Enter the value of n1 & n2:");
	scanf("%d %d",&n1,&n2);
	for(i=1;i<=n1 && i<=n2;i++)
	if(n1%i==0 && n2%i==0){
	gcd=i;
}
	printf("%d",gcd);
	return 0;
}
