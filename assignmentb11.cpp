#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the value of x and y:");
	scanf("%d %d",&x,&y);
	if(x==0 && y==0){
		printf("It lies on the origin!");
	}
	else if(x==0)
	printf("It lies on the y axis!");
	else if(y==0)
	printf("It lies on the x axis!");
	else
	printf("It lies on the first quadrant!");
	return 0;
}
