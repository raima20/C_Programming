#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[15],c[10],d[15];
	printf("Enter the first string:");
	scanf("%s",a);
	printf("Enter the second string:");
	scanf("%s",b);
	strcpy(c,a);		//c<-a
	printf("%s\n",c);
	strcpy(d,b);        //d<-b
	printf("%s\n",d);
	strcat(d,c);		//d<-d,c
	strcat(b,a);        //b<-b,a
	printf("%s\n",d);
	printf("%s\n",b);
	strcat(a,b);      	//a<-a,b
	strcat(a,c);		//a<-a,b,c
	strcat(a,d);		//a<-a,b,c,d
	printf("%s",a);
	return 0;	
}
