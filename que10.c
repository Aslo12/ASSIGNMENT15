//FUNCTION IN C TO COUNT THE FREQUENCY OF EACH ELEMENT OF AN ARRAY..
#include<stdio.h>
void freq(int a[])
{
  int freq[100]={0},i;
  for(i=0;i<10; i++)
  {
    freq[a[i]]++;
  }

    for(i=0; i<100; i++)
    {
        if(freq [i]!=0)
        printf("%d==>%d\n",i,freq[i]);
    }
}
int main()
{
    int a[10]={ 2,3,4,5,6,8,7,0,1,3};
    freq (a);
    return 0;
}