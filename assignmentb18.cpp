#include<stdio.h>
int main()
{
	char gender,m,f;
	int salary,bonus,p,q;
	printf("Enter the gender type:");
	scanf("%c",&gender);
	printf("Enter the salary:");
	scanf("%d",&salary);
	if(gender=='m'||gender=='M'){
		bonus=60;
		p=salary+(salary*bonus/100);
		printf("%d",p);
	}
	else{
		bonus=70;
		q=salary+(salary*bonus/100);
		printf("%d",q);
	}
	return 0;
	
}
