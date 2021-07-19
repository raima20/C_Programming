#include<stdio.h>
float add(float a, float b)
{
float c;
c=a+b;
return c;
}
int main()
{
  float a;
  a=add(4.5,5.3);
  printf("%f",a);
  return 0;	
}
