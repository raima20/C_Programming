#include<stdio.h>
int main()
{
	int choice;
	float a,b,c;
	printf("\n================== CALCULATOR =====================\n");
	printf("Enter the first number:");
	scanf("%f",&a);
	printf("Enter the second number:");
	scanf("%f",&b);
	printf("1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice);
	{
		case 1:
			c=(a+b);
			printf("The result is: %f",c);
			break;
		case 2:
			c=(a-b);
			printf("the result is: %f",c);
			break;
		case 3:
			c=(a*b);
			printf("the result is: %f",c);
			break;
		case 4:
			c=(a/b);
			printf("the result is: %.2f",c);
			break;
		}
		return 0;
	}
			
			
			

			

	

	
	

