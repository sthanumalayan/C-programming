#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("%c is a vowel",ch);
    }
    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("%c is a vowel",ch);
    }
    else printf("IT IS A CONSONANT");
    return 0;
}