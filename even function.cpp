#include<stdio.h>
int even(int n)
{
	int i,s=0,num=0;
	for(i=1;i<=n;i++){
        s=s+num;
        num=num+2;
	}
		printf("%d",s);
	return s;
}
int main()
{
	int n,p;
	printf("Enter the range:");
	scanf("%d",&n);
	p=even(n);
	return 0;
}
