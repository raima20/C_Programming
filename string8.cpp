#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10],c[10];
	scanf("%s",a);
	scanf("%s",b);
	int n=strlen(a);
	int m=strlen(b);
	int i;
	int j=0;
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	c[i]='\0';
	printf("%s",c);
	for(i=n;i<n+m;i++)
	{
		a[i]=b[j];
		j=j+1;
	}
	a[i]='\0';
	printf("%s",a);
	return 0;
}
