#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)printf("IT IS ALPHABET");
    else if(ch>=65 && ch<=90 ) printf("IT IS ALPHABET");
    else if(ch>='0' && ch<='9')printf("IT IS DIGIT");
    else printf("IT IS SPECIAL CHARACTER");
    return 0;
}