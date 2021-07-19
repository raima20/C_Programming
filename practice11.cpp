#include<stdio.h>
int main()
{
	int a[10],n,i,j,c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
    for(i=0;i<n;i++){
    	int c=1;
    	for(j=i+1;j<n;j++){
	if(a[i]==a[j])
	c++;}
	if(c>1)
	printf("%d\n",c);
}

return 0;
}
    

