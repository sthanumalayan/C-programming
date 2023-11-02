#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int bin=0;
    while(n)
    {
        bin=bin*10 + n%2;
        n=n/2;
    }
    printf("THE BINARY EQUIVALENT OF %d is %d",temp,bin);
    return 0;
}