/*1-x+x^2/2!-x^3/3!+x^4/4!....upto n*/
#include<stdio.h>
#include<math.h>
int main()
{
	int range,i,j,a,x;
	float sum1=1,sum2=0,mult=1,p;
	printf("Enter the range:");
	scanf("%d",&range);
	printf("Enter the number:");
	scanf("%d",&x);
	for(i=1;i<range;i++)
	{
		for(mult=1,j=1;j<=i;j++)
		{
			mult=mult*j;
		}
		
		  p=pow(x,i)/mult;
		if(i%2==0){
		sum1=sum1+p;}
		
		else{
		sum2=sum2-p;}
	    
    }
    printf("The sum is:%f",sum1+sum2);
    return 0;

}
