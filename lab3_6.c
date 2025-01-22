#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(isalnum(ch)==0)
    {
        printf("%c is not alphanumeric",ch);
    }
    else{
        printf("%c is alphanumeric",ch);
    }
    if(isblank(ch)==0)
    {
        printf("%c is not blank character",ch);
    }
    else{
        printf("%c is blank character",ch);
    }
    if(isalpha(ch)==0)
    {
        printf("%c is not alphabetic",ch);
    }
    else{
        printf("%c is alphabetic",ch);
    }
    if(iscntrl(ch)==0)
    {
        printf("%c is not control character",ch);
    }
    else{
        printf("%c is control character",ch);
    }
    if(isdigit(ch)==0)
    {
        printf("%c is not number digit",ch);
    }
    else{
        printf("%c is number digit",ch);
    }
    if(isupper(ch)==0)
    {
        printf("%c is not uppercase",ch);
    }
    else{
        printf("%c is uppercase",ch);
    }
    if(islower(ch)==0)
    {
        printf("%c is not lowercase",ch);
    }
    else{
        printf("%c is lowercase",ch);
    }
    if(isxdigit(ch)==0)
    {
        printf("%c is not hexadecimal",ch);
    }
    else{
        printf("%c is hexadecimal",ch);
    }
    if(isgraph(ch)==0)
    {
        printf("%c is not a graphical character",ch);
    }
    else{
        printf("%c is a graphical character",ch);
    }
    return 0;
}