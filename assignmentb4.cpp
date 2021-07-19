#include<stdio.h>
int main()
{
	float a,b,c,p;
	printf("Enter the three value of a triangle:");
	scanf("%f\n%f\n%f",&a,&b,&c);
	p=a+b+c;
	printf("%f\n",p);
	if(p==180){
		printf("It is a triangle!");
	}
	else{
		printf("It is not a triangle!");
		}
	return 0;
	
}
