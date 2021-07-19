#include<stdio.h>
void fact(float salary)
{
	float HRA,DA,p;
	if(salary<1500){
		HRA=salary*0.1;
		DA=salary*0.9;
		p=salary+HRA+DA;
		printf("%.2f",p);
	}
	else{
		HRA=500;
		DA=salary*0.98;
		p=salary+HRA+DA;
		printf("%.2f",p);
	}
	
 } 
 int main()
 {
 	float salary;
 	printf("Enter the salary:");
 	scanf("%f",&salary);
 	fact(salary);
 	return 0;
 }
