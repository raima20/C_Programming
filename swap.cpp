/*swap without using third variable*/
#include<stdio.h>
int main()
{
	int p=6,q=10;
	printf("p=%d\t",p);
	printf("q=%d\n",q);
	//p=(p+q);
	//q=p-q;
	//p=p-q;
	p=(p+q)-(q=p);
	printf("p=%d\tq=%d",p,q);
	return 0;
}
