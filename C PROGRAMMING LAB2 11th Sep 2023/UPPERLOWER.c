#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)printf("IT IS LOWERCASE ALPHABET");
    else if(ch>=65 && ch<=90 ) printf("IT IS UPPERCASE ALPHABET");
    return 0;
}