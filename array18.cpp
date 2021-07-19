#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,x;
	float a[100];
	printf("Enter the range:");
	scanf("%d",&n);
	printf("Enter the number:");
	scanf("%d",&x);
	x=-x;
	a[0]=1;
	for(i=1;i<n;i++)
	
	 a[i]=(float)pow(x,i)/(i);

    printf("The numbers are:\n");
    for(i=0;i<n;i++)
    printf("a[%d]: %0.2f\n",i,a[i]);
    return 0;
	
}
