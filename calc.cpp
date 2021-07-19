#include<stdio.h>
int main()
{
	char choice;
	float a,b,c;
	printf("\n =================CALCULATOR=================\n");
	while(true)
	{

     	printf("\n Addition(+)\n substraction(-)\n Multipication(*)\n Division(/)\n Exit(e)\n");
	
	    printf("Enter the first number :");
    	scanf("%f",&a);
    	scanf(" %c",&choice);
	
	    printf("Enter the second number :");
	    scanf("%f",&b);
	    switch(choice)
	   { 
		    case '+':
			    c=a+b;
		      	printf("The result is: %.2f",c);
		    	break;
			
		    case '-':
		     	c=(a-b);
			    printf("The result is: %.2f",c);
		    	break;
			
			case '*':
			    c=(a*b);
		     	printf("The result is: %.2f",c);
		    	break;
			
			case '/':
		    	c=(a/b);
			    printf("The result is: %.2f",c);
		    	break;
			
			case 'e':
		    	return 0;
			
			default:
		    	printf("wrong input!!");
		    	break;
		    }
   }
	          return 0;
	          
}





