// function program to find the greatest number from the given array of any size(tsrs)..
#include<stdio.h>
void reverse(int b[])
{
  int i,c[10];
  printf("enter value of aarray");
  for (i=0; i<=9; i++)
  {
    scanf("%d",&b[i]);
  }
  printf("REVERSE ARRAY IS :\n");
  for(i=9; i<=0; i--)
  {
    printf("%d ",c[i]);
  }


}
int main()
{
    int a[10];
   reverse( a);
   return 0;
}