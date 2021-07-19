#include<stdio.h>
int fact(int n)
{
	int i,mult=1;
	for(i=1;i<=n;i++){
		mult=mult*i;}
		return mult;
}
int main()
{
	int n,s=0,f;
	printf("Enter the range:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	f=fact(i);
	s=s+f;
}
	
	printf("%d",s);
	return 0;
}
