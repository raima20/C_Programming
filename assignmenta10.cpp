#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter the fahrenhiet value:");
	scanf("%f",&f);
	c=((5.0*f)-(5*32))/9;
	printf("centigrade value is:%.2f",c);
	return 0;
}
