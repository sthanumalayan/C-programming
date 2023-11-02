#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int rev=0;
    while(n)
    {
        rev=(rev*10) +n%10;
        n/=10;
    }
    if(rev==temp)printf("IT IS PALINDROME");
    else printf("IT IS NOT PALINDORME");
    return 0;
}