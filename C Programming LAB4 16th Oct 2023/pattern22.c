#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j>=0;j--)
        {
            printf("%c ",'A'+n-j-1);
        }
        printf("\n");
    }

    return 0;
}