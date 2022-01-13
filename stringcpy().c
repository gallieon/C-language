#include <stdio.h>
#include <string.h>
void main()
{
    char ch[20]={'g','a','l','l','i','e','o','n','\0'};
    char ch2[20];
    
    strcpy(ch2,ch);
    printf("value of string is: %s",ch2);
}
