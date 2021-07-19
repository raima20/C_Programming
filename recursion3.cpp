#include<stdio.h>
int factorial(int i)
{
	if(i<=1)
	{
		return 1;
	}
	return i+factorial(i-1);
}
int main()
{
	int z;
	z=factorial(5);
	printf("The number is:%d",z);
	return 0;
}

