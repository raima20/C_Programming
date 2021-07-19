#include<stdio.h>
#include<math.h>
float square(int a,int b, int c)
{
	float s,area;
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}
int main()
{
	int a,b,c;
	float p;
	printf("Enter the first angle:");
	scanf("%d",&a);
	printf("Enter the second angle:");
	scanf("%d",&b);
	printf("Enter the third angle:");
	scanf("%d",&c);
	p=square(a,b,c);
	printf("The area of the triangle is:%f",p);
	return 0;
}
