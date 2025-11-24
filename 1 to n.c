#include<stdio.h>
void main()
{
    int i,n;
    scanf("%d",&n);
    i=1;
    while(i<=(n-1))
    {
        printf("%d ",i);
        i++;
    }
    printf("%d",i);
}
