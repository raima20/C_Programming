#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("Enter the 3 value:");
	scanf("%f %f %f",&a,&b,&c);
	float i=pow(a,2),j=pow(b,2),k=pow(c,2);
	if(a==b && b==c)
    	printf("It is an equilateral triangle!");
    else if((a==b && b!=c)||(b==c && c!=a)||(c==a && a!=b))
		printf("It is an isosceles triangle!");
	else
		printf("It is a scalene triangle!");
  	if((i==(j+k)||j==(i+k)||k==(i+j)))
  		printf("It is a right-angled triangle!");
	return 0;
}
