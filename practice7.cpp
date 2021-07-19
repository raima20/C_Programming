#include<stdio.h>
#include<math.h>
void binary(int n)
{
	int x,i=0,sum=0;
	while(n>0){
		x=n%2;
		n=n/2;
		sum=sum+x*pow(10,i);
		i++;
	}
	printf("%d",sum);
	
}
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	binary(n);
	return 0;
}
