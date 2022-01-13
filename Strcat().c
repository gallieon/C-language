#include <stdio.h>
#include <string.h>
void main()
{
    char ch[20]={'g','a','l','l','i','e','o','n',' ','\0'};
    char ch2[20]={'m','u','s','k','\0'};
    strcat(ch,ch2);
    printf("value of string: %s",ch);
}
