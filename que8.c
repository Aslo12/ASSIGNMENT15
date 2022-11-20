// function program to print all unique elemwents in an array..
#include<stdio.h>
void duplicate(int a[])
{
  int freq[100]={0},i;
  for(i=0; i<=9; i++)
  {
    freq[a[i]]++;
  }
  for(i=0; i<100; i++)
  { 
    if(freq[i]!=0)
    printf("%d \n",freq[i]);
  }
  
} 
  

int main()
{
    int a[10]={ 1,2,3,4,2,3,4,5,6,7};
    duplicate(a);
    return 0;
}