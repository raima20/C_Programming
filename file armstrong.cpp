#include<stdio.h>
#include<math.h>
int main()
{
	FILE *fp;
	int l,u;
	fp=fopen("C:\\Users\\Raima\\Desktop\\data structure\\armstrong.txt","a+");
	fscanf(fp,"%d",&l);
	fscanf(fp,"%d",&u);
	printf("%d %d",l,u);
	int i,j,c,sum=0,temp=0,p;
	for(i=l;i<=u;i++)
	{
		c=0;
		sum=0;
		temp=p=i;
		while(temp>0)
		{
		temp=temp/10;
		c++;
	}
	
	for(j=1;j<=c;j++)
	{
		temp=p%10;
		p=p/10;
		sum=sum+pow(temp,c);
	}
	if(sum==i)
	fprintf(fp,"%d\n",i);
}
    fclose(fp);
    return 0;
}
