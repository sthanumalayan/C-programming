#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++) printf("%c",'A'+i);
        printf("\n");
    }
    return 0;
}