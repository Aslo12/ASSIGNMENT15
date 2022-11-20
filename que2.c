// function program to find the smallest number from the given array of any size(tsrs)..
#include<stdio.h>
void smallest_num(int b[])
{
  int i,small=1000;
  printf("enter value of aarray");
  for (i=0; i<=9; i++)
  {
    scanf("%d",&b[i]);
  }
  for(i=0; i<=9; i++)
  {
    if(small > b[i])
    small=b[i];
  }
  printf(" smallest number is  %d", small);
}
int main()
{
    int a[10];
   smallest_num( a);
   return 0;
}