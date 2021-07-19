#include<stdio.h>
int factorial(int i)
{
  if(i<=1)
  {
  return 1;
}
  return i*factorial(i-1);
}
int main()
{
	int z,n;
	printf("Enter the number:");
	scanf("%d",&n);
	z=factorial(n);
	printf("%d",z);
	return 0;
}

