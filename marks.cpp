#include<stdio.h>
void marks(int sub1,int sub2,int sub3,float*ave,float*percentage)
{
	*ave=(sub1+sub2+sub3)/300.0;
	*percentage=*ave *100;
}
int main()
{
	int sub1,sub2,sub3;
	float ave,percentage;
	printf("Enter the marks for 3 subject:\n");
	scanf("%d\n %d\n %d",&sub1,&sub2,&sub3);
	marks(sub1,sub2,sub3,&ave,&percentage);
	printf("The average is:%.2f ",ave);
	printf("The percentage is:%.2f",percentage);
	return 0;
}
