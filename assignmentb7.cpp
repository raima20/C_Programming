#include<stdio.h>
int main()
{
	float w,l,a,p;
	printf("Enter the length:");
	scanf("%f",&l);
	printf("Enter the width:");
	scanf("%f",&w);
	a=(l*w);
	printf("The area of the rectangle is:%f\n",a);
	p=2*(l+w);
	printf("The perimeter of the rectangle is:%f\n",p);
	if(a>p)
	printf("The area of the rectangle is greater than its perimeter!");
	else
	printf("The area of the rectangle is less than its perimeter!");
	return 0;
	
}
