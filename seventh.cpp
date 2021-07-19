#include <stdio.h>
int main()
{
	int choice;
	printf("Pressed 1 Or 2 :");
	scanf("%d",&choice);
	switch(choice)
{
		
	case 1:
		printf("You pressed 1");
		break;
	case 2:
		printf("You pressed 2");
		break;
			

default:
printf("Invalid Number!");
break;
}
return 0;
}


