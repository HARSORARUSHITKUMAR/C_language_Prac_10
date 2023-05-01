#include<stdio.h>
int main()
{

  int n,y=0,count=0;
  printf("enter the value: ");
  scanf("%d",&n);
  if(n==1)
  {
    printf("0");
  }
  else
  {
  while(y!=1)
  {
      if(n%2==0)
      {
        y=n/2;
        n=y;
      }
      else
      {
         y=3*n+1;
        n=y;
      }
    count++;
  }
  printf("%d",count);
  }
  return 0;
  }
