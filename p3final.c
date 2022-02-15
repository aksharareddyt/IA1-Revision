#include <stdio.h>
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
int add(int n)
{
  int sum=0;
  for(int i=0;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
void output(int n,int sum)
{
  printf("Sum of %d is %d\n",n,sum);
}
int main()
{
  int n,sum;
  n=input();
  sum=add(n);
  output(n,sum);
  return 0;
}


