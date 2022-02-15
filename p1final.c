#include <stdio.h>
void input(int *pa,int *pb)
{
  printf("Enter the number\n");
  scanf("%d%d",pa,pb);
}
void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("%d + %d is sum %d",a,b,sum);
}
int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(x,y,z);
  return 0;
}