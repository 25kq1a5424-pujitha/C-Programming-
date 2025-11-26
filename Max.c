#include<stdio.h>
void main()
{
    int i,a[5],max;
    printf("enter 5 integer numbers to continue:\n");
    for(i=0;i<=4;i++)
    {
    scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<=4;i++)
    {
    if(a[i]>max)
    {
    max=a[i];
    }
    }
    printf("max of array elements;%d",max);
    }
