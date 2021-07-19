#include<stdio.h>
int main()
{
	FILE *fp;
	int l,u;
	fp=fopen("C:\\Users\\Raima\\Desktop\\data structure\\prime.txt","a+");
	fscanf(fp,"%d",&l);
	fscanf(fp,"%d",&u);
	//printf("%d %d",l,u);
	int i,j,count=0;
	for(i=l;i<=u;i++)
	{
		count=0;
		
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2)
	fprintf(fp,"%d\n",i);
}
    fclose(fp);
    return 0;
}
