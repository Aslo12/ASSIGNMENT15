//write a function to find ths first occurence of a adjacent duplicate values in the array.
#include<stdio.h>
int main()
{
    int a[10],i, n;
    printf("Enter number of aaray length\n");
    scanf("%d",&n);
    printf("Enter value of aarray:\n");
    for(i=0; i<n-1; i++)
     {
    scanf("%d",a[i]);

     }
     for(i=0; i<n-1; i++)
     {
        if(a[i]==a[i+1])
     printf("%d ",a[i]);
     }
     return 0;
}