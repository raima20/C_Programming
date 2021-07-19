#include<stdio.h>
int main()
{
	int a=4;
	Level:
		a++;
		if(a==2)
		{
			printf("%d\n",a);
			goto Level;
		}
		printf("%d",a);
	return 0;
}
