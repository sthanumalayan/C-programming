#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int len=0;
    while(n)
    {
        len++;
        n=n/10;
    }
    printf("THE LENGTH OF NUMBER IS %d",len);
    return 0;
}