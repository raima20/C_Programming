#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	printf("Enter the name you want to enter:");
	scanf("%s",name);
	int l;
	l= strlen(name);
	for(int i=l-1;i>=0;i--)
	{
		printf("%c",name[i]);
	}
	return 0;
}
