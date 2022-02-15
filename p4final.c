#include <stdio.h>
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
void inputarray(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      printf("enter the no.");
      scanf("%d",&a[i]);
    }
}
int sumarray(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
    {
      sum+=a[i];
    }
  return sum;
}
void output(int n,int a[n],int sum)
{
  for(int i=0;i<n-1;i++)
  {
    printf("%d",a[i]);
  }
    printf("%d is %d\n",a[n-1],sum); 
}
int main()
{
  int n,sum;
  n=input();
  int a[n];
  inputarray(n,a);
  sum=sumarray(n,a);
  output(n,a,sum);
  return 0;
}