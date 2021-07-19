#include<stdio.h>
#include<math.h>
void sum(int n)
{
	int i,s=0,p;
	for(i=1;i<=n;i++){
	p=pow(i,3);
	s=s+p;
}
	printf("%d",s);
}
int main()
{
	int n;
	printf("Enter the range:");
	scanf("%d",&n);
	sum(n);
	return 0;
}
