#include<stdio.h>
void printarray(float a[],int n)
{
 float p,mult;
 int i,j;
 for(i=0;i<n;i++)
 {
   for(mult=1,j=1;j<=i;j++)
   mult=mult*j;
 
 p=i/mult;
 a[i]=p;
}
}
void printfactorial( float a[],int n)
{
for(int i=0;i<n;i++)
printf("%f\t",a[i]);
}
int main()
{
  int i,n;
  float a[100];
  printf("Enter the range:");
  scanf("%d",&n);
  printf("The factorial is:\n");
  printarray(a,n);
  printfactorial(a,n);	
}


