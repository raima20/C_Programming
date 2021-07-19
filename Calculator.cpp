#include<stdio.h>
int main()
{
	char choice;
	float a,b,c;
	printf("\n================== CALCULATOR =====================\n");
	while(true)
	{
		
		printf("\nAddition(+)\nSubstraction(-)\nMultiplication(*)\nDivision(/)\nExit(e)\n");
	
		printf("Enter the first number:");
		scanf("%f",&a);
		scanf(" %c",&choice);
	
		printf("Enter the second number:");
		scanf("%f",&b);
		switch(choice)
		{
			case '+':
				c=(a+b);
				printf("The result is: %.2f",c);
				break;
			case '-':
				c=(a-b);
				printf("the result is: %.2f",c);
				break;
			case '*':
				c=(a*b);
				printf("the result is: %.2f",c);
				break;
			case '/':
				c=(a/b);
				printf("the result is: %.2f",c);
				break;
			case 'e':
				return 0;
			default:
				printf("Wrong Input!!");
				break;
		}
	}
		return 0;
	}
			
			
			

			

	

	
	

