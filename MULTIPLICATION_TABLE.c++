#include<stdio.h>
int main()
{
  int n,i,j;
  for(i=1;i<=10;i++)
  {
    printf("Multiplication Table Of %d\n",i);
    for(j=1;j<=10;j++)
    {
      printf("%d x %d = %d\n",i,j,i*j);
    }
  printf("\n");
  }
}
