#include <stdio.h>  
int main()  
{  
    int sum=0;    
    char name[20];    
    int i=0;    
    printf("Enter a name: ");  
    scanf("%s", name);  
    while(name[i]!='\0')    
    {  
        printf("\nThe ascii value of the character %c is %d", name[i],name[i]);  
        sum=sum+name[i];  
        i++;  
    }  
    printf("\nSum of the ascii value of a string is : %d", sum);  
      
}  

