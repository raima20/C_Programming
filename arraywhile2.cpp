#include<stdio.h>
int main()
{
	int i,j,l,u,a[100],n,c;
	printf("Enter the lower number:");
	scanf("%d",&l);
	printf("Enter the upper number:");
	scanf("%d",&u);
	i=l;
	while(i<=u)
	{
	  c=0;
	  j=1;
	  while(j<=i)
	  {
	  	if(i%j==0)
	  	c++;
		  
		  j++;
	}
		  if(c==2)
		  {
		  	a[n]=i;
		  	n++;
		  	
			  }
			  i++;	
	}
	i=0;
	while(i<n)
	{
		printf("a[%d]: %d\n",i,a[i]);
		i++;
	}
	return 0;
}
