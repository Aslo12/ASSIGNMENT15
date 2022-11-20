//WRITE A FUNCTION TO ROTATE AN ARRAY BY N POSITION IN D DIRECTION . THE D IS AN INDICATIVE VALUE
//FOR LEFT OR RIGHT.EX.(IF ARRAY OF SIZE 5 IS [32 29 40 12 70]) THEN (40 12 70 32  29)..
#include<stdio.h>
int main()
{
  int a[5]={1,2,3,4,5};
    int d=2,i;
    while(d!=0)
    {
        int temp=a[4];
        for(i=4; i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
        d--;
    }
    for(i=0; i<5; i++)
    printf("%d  ",a[i]);
    return 0;
    
}
