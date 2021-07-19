#include<stdio.h>
int main()
{
	int days,n=0,p=0;
	printf("Enter the days value:");
	scanf("%d",&days);
		p=days/30;
		n=days%30;
		if(p>0 && n>0){
        printf(" %d months %d days",p,n);
    }
    else if(n==0)
    printf("%d months",p);
    else
    {
    	printf("%d days",n);
	}
	return 0;
}
