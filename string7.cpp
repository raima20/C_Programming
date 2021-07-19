#include<stdio.h>
#include<string.h>
int main()
{
	char source[10],source1[10];
	int i,n,m;
	scanf("%s",source);
	scanf("%s",source1);
	n=strlen(source);
	m=strlen(source1);
	//printf("%d",n);
	int j=0;
	for(i=n;i<n+m;i++)
	{
		source[i]=source1[j];
		//printf("%c",source[i]);
		j=j+1;
	}
	source[i]='\0';
	printf("%s",source);
	return 0;
}
