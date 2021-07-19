#include<stdio.h>
int main()
{
	char *str;
	int i=0,j=0;
	printf("Enter the string:");
	scanf("%s",str);
	
	while(str[i]!='\0'){
	i++;
}
   while(i>=0){
//   *rev=str[i--];
//   rev++;
printf("%c",str[i--]);
}

//rev[j]='\0';
//printf("%s",rev);
return 0;
}
