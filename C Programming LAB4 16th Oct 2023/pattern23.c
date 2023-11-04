#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)printf(" ");
        printf("*");
        for(int k=0;k<2*n-3-2*i;k++)
        {
            printf("_");
            if(k==2*n-2*i-4)printf("*");
        }
        printf("\n");
    }
    return 0;
}
