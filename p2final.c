#include <stdio.h>
int input()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  return n;
}
int cmp(int a,int b,int c)
{
  int l;
  l=a;
    if(l<b)
    {
      l=b;
    }
    if(l<c)
    {
      l=c;
    }
  return l;
}
void output(int l)
{
  printf("The largest number is %d",l);
}
int main()
{
  int x,y,z,g;
  x=input();
  y=input();
  z=input();
  g=cmp(x,y,z);
  output(g);
  return 0;
}