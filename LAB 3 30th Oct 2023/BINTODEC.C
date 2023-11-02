#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);  //1011
    int temp=n;
    int dec=0;
    int count=0;
    while(n)
    {
        dec+= (n%10)*pow(2,count);
        n=n/10;
        count++;
    }
    printf("THE DECIMAL EQUIVALENT OF %d is %d",temp,dec);
    return 0;
}