#include<stdio.h>
int main()
{
	char a[100],m;
	printf("Enter the name:");
	scanf("%s",a);
	m=a[0];
	for(int i=1;m='\0';i--)
	{
		printf("%c",m);
		m=a[i];
	}
	return 0;
}
