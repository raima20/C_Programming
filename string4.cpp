#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	printf("Enter the name you want to enter:");
	scanf("%s",name);
	int l;
	l= strlen(name);
	printf("Length of %s = %d",name,l);
	return 0;
}
