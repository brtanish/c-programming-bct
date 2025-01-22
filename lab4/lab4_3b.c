#include<stdio.h>
int main()
{
    char alpha;
    printf("enter an alphabet");
    scanf("%c",alpha);
    if( (alpha>='A' && alpha<='Z')||
    (alpha >= 'a'&& alpha<='z'))
    {
        switch(alpha)
        {
            case'a':
            case'e':
            case'i':
            case'o':
            case'u':
            case'A':
            case'E':
            case'I':
            case'O':
            case'U':
            printf("\n %c is vowel",alpha);
            break;
            default:
            printf("%c is consonant",alpha);
        }
    }
    else{
        printf("%c is not an alphabet",alpha);
    }
    return 0;
}