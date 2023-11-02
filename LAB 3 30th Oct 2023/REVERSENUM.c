#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rev=0;
    while(n)
    {
        rev=(rev*10) +n%10;
        n/=10;
    }
    printf("THE REVERSED IS %d",rev);
    return 0;
}