
#include<stdio.h>
#include<conio.h>
void main()
{
  int f0=0,f1=1,f;
  int i;
  printf("first 10 Fibonacci numbers are :\n");
  for (i=1;i<=10; i++)
  {
      f=f0+f1;
      printf("%5d,f");
      f1=f0;
      f0=f;
  }
  getch();
}
