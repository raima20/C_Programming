#include<stdio.h>
int main()
{
	int choice,mult=1,i,n,count=0;

	while(1){
	printf("\n=================================================\n");
	printf("==================             ==================\n");
	printf("==================   Choices   ==================\n");
	printf("==================             ==================\n");
	printf("=================================================");
	printf("\n1. Factorial\n2. Prime or not\n3. Odd or even\n4. Exit\n");
	printf("Enter the choice:");
	scanf("%d",&choice);   
	if(choice!=4){
	printf("Enter the number:");
	scanf("%d",&n);
	}
	switch(choice)
	{
	  case 1:
	  for(i=1;i<=n;i++)
	  {
	  mult=mult*i;}
	  printf("%d",mult);
	  break;
	  case 2:
	  for(i=1;i<=n;i++)
	  if(n%i==0)
	  count++;
	  if(count==2){
	  	printf("It is a prime number!");
	  }	
	  else
	  printf("It is not a prime number!");
	  break;
	  case 3:
	  if(n%2==0)
	  printf("It is an even number:");
	  else
	  printf("It is an odd number!");
	  break;
	  case 4:
	  	return 0;
	  default:
	  printf("Invalid op!");
	}
	}
	return 0;
}
