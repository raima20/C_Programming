#include<stdio.h>
int main()
{
	int paise;
	float rupees;
	printf("Enter the paise:");
	scanf("%d",&paise);
	rupees=paise/100;
	printf("The rupees is:%.0f.%d",rupees,paise%100);
	return 0;
}
