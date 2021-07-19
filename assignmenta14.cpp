#include<stdio.h>
int main()
{
	int i,n,s=0,x=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		n=n/10;
		s=(s*10)+i;
		x++;
	}
	if(x>5){
	printf("The number you entered more than 5 digits!");
	}
	else{
	printf("The number is:%d",s);
}
	return 0;
}
