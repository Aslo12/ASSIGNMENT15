//WRITE A FUNCTION TO SORT AN ARRAY OF ANY SIZE..
#include<stdio.h>
void sort(int a[])
{
int i,j,temp=0;
printf("ENTER 10 NUMBERS\n");
for(i=0; i<=9; i++)
{
    scanf("%d",&a[i]);
}
for (i=0; i<9; i++)
{
    for(j=i+1; j<=9; j++)
    {
        if(a[i]>a[j])
        {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;

        }
    }
}

for(i=0; i<=9; i++)
{
    printf("%d\n",a[i]);
}

}
int main()
{

    int a[10];
    sort(a);
    return 0;
}