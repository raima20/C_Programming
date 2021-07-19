#include<stdio.h>
int main()
{
	float a,b,c,d,e,ave;
	printf("Enter the marks:");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	ave=(a+b+c+d+e)/5.0;
	printf("%.2f\n",ave);
	if(a>20 && b>20 && c>20 && d>20 && e>20){
		if(ave>=60){
			printf("Grade A");
		}
		else if(ave>=45){
			printf("Grade B");
		}
		else if(ave>=34){
			printf("Grade C");
		}
		else{
			printf("Fail");
		}
		
	}
	else
	printf("Fail");
	return 0;
}
