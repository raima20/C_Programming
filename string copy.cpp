#include<stdio.h>
#include<string.h>
int main()
{
	char source[16],dest[16],i,n;
	scanf("%s",source);
	n=strlen(source);
	for(i=0;i<n;i++)
	{
		dest[i]=source[i];
	}
	dest[i]='\0';
	printf("%s",dest);
	return 0;
}
