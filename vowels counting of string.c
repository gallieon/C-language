#include <stdio.h>
#include <conio.h>
void main()
{
    char s[300];
    int i=0;
    int count=0;
    printf("enter your string:\n");
    scanf("%s",&s);
    
    while(i<11)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            count ++;
            printf("%c\t",s[i]);
        }
        i++;
    }
        printf("\n the number of vowels %d",count);
}
