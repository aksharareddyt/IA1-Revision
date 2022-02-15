#include <stdio.h>
float input()
{
  float f;
  printf("Enter the number\n");
  scanf("%f",&f);
  return f;
}
float mysqrt(float n)
{
  float s=n/2;
  float t=0;
  while(t!=s)
  {
    t=s;
    s=(n/t+t)/2;
  }
  return s;
}
void output(float n,float sqrtresult)
{
  printf("Square root of %f is %f",n,sqrtresult);
}
int main()
{
  float n=input();
  float r=mysqrt(n);
  output(n,r);
  return 0;
}