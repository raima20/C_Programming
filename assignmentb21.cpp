#include<stdio.h>
int main()
{
	char n;
	int i,range;
	printf("Enter the range:");
	scanf("%d",&range);
	for(i=0;i<range;i++)
	{
	printf("Enter the value:\n");
	scanf(" %c",&n);
	if(n>='A' && n<='Z')
	printf("It is a capital letter!\n");
	else if(n>='a' && n<='z')
	printf("It is a small letter!\n");
	else if(n>='0' && n<='9')
	printf("It is a digit!\n");
	else
	printf("It is a special symbol!\n");
}
	return 0;
}
