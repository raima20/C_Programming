#include<stdio.h>
#include<string.h>
int main()
{
	char source[]="abcd";
	char source1[]="efgh";
	strcat(source,source1);
	printf("%s",source);
	return 0;
}
