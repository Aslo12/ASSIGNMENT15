//WRITE A FUNCTION IN C TO COUNT A TOTAL NUMBER OF DUPLICATE ELEMENTS IN AN ARRAY.
#include<stdio.h>
void duplicate(int a[])
{
   int  i,j,count=0;
   printf("Enter values in array\n");
   for(i=0; i<=9; i++)
   {
    scanf("%d ",&a[i]);
   }
   for(i=0; i<=9; i++)
{
    for(j=i+1; j<=9; j++)
    {
        if(a[i]==a[j])
        count++;
    }
}
printf("%d ",count);
}

int main()
{
    int a[10];
    duplicate(a);
    return 0;
}