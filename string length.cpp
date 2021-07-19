#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str;
	int length,n;
	printf("Enter the range:");
	scanf("%d",&n);
	str = (char*)malloc(sizeof(char)*n);
	printf("Enter the string:");
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++)
	length++;
	printf("%d",length);
	return 0;
}
