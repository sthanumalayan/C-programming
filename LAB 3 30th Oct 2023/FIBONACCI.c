#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int first=0;
    int second=1;
    int third=first+second;
    int count=0;
    while(count<n)
    {
        printf("%d ",first);//0 1 1 2 3 5 8
        first=second;
        second=third;
        third=first+second;
        count++;
    }
    return 0;
}