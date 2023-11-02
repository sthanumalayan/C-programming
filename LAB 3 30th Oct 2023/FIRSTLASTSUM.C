#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int sum=n%10;
    while(n/10)
    {
        n/=10;
    }
    sum+=n%10;
    printf("THE SUM OF FIRST AND LAST DIGIT IS %d",sum);
    return 0;
}