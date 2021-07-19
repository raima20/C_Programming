#include<stdio.h>
int main()
{
	char v;
	int count1=0,count2=0,count3=0,count4=0,i,range;
	printf("Enter the range:");
	scanf("%d",&range);
	for(i=0;i<=range;i++)
	{
		printf("Enter the value:");
		scanf(" %c",&v);
		if(v>='A'&& v<='Z')
		count1++;
		else if(v>='a'&& v<='z')
		count2++;
		else if(v>='0' && v<='9')
		count3++;
		else
		count4++;
	}
	printf("Capital letters: %d\n",count1);
	printf("Small letters is:%d\n",count2);
	printf("Digits is: %d\n",count3);
	printf("Special symbol is:%d\n",count4);
	return 0;
}
