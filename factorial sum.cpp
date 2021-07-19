#include<stdio.h>
void fact(int n)
{
	int i,j,mult=1,f=1,s=0;
	for(i=1;i<=n;i++)
	for(j=1;j<=i;j++){
    f=1;
	f=f*j;
	s=s+f;
}
printf("%d",s);
}
int main()
{
	int n;
	printf("Enter the range:");
	scanf("%d",&n);
	fact(n);
	return 0;
}
