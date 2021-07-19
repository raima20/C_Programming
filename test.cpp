#include<stdio.h>
#include<math.h>
int main()
{
	float a,c,b,d,p,q;
	printf("Enter the first value:");
	scanf("%f",&a);
	printf("Enter the second value:");
	scanf("%f",&b);
	printf("Enter the third value:");
	scanf("%f",&c);
	d=(b*b)-(4*a*c);
	printf("The value is:%.2f",d);

	if(d>0){
			p=(-b+(sqrt(d))/(2*a));
	q=(-b-(sqrt(d))/(2*a));
	printf("The first root is:%.2f\n",p);
	printf("The second root is:%.2f",q);
}
else
printf("The root is imaginary!");
	return 0;
}
