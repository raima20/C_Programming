#include<stdio.h>
int main()
{
	int hh=24,mm,p;
	printf("Enter the time in 24 hours format:");
	scanf("%d:%d",&hh,&mm);
	if(hh>12){
	p=hh-12;
	printf("Time: (0%d:0%d)PM",p,mm);
}
if(hh<12){
	if(hh<10){
	
	if(mm<10)
	printf("Time=0%d:0%d AM",hh,mm);
	else
	printf("Time=0%d:%d AM",hh,mm);
}

else{
	printf("Time=%d:%d AM",hh,mm);

}
	}
else{
	if(hh==12){
		if(mm<10)
	printf("Time =%d:0%d PM",hh,mm);
}
else{
	if(hh-12<10){
	if(mm<10)
	printf("Time=0%d:0%d AM",hh-12,mm);
	else
printf("Time: (%d:%d)PM",hh-12,mm);
}
}
}
	return 0;
}
