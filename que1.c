// function program to find the greatest number from the given array of any size(tsrs)..
#include<stdio.h>
void gre_num(int b[])
{
  int i,max=-1;
  printf("enter value of aarray");
  for (i=0; i<=9; i++)
  {
    scanf("%d",&b[i]);
  }
  for(i=0; i<=9; i++)
  {
    if(max < b[i])
    max=b[i];
  }
  printf("%d", max);


}
int main()
{
    int a[10];
   gre_num( a);
   return 0;
}