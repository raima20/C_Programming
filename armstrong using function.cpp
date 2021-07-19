#include<stdio.h>
#include<math.h>
void arm(int n)
{
	int r,sum=0,x,c=0,p;
	x=n;
	while(x>0)
	{
		c++;
		x=x/10;
	}
	   p=n;
	   for(int i=1;i<=c;i++){
		x=p%10;
		p=p/10;
		sum=sum+pow(x,c);
	}
	
	if(n==sum)
	printf("Armstrong number!");
	else
	printf("Not an armstrong number!");

}
int main()
{
	int n;
    printf("Enter the number:");
    scanf("%d",&n);
	arm(n);
	return 0;
}
