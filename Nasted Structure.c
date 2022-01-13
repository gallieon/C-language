#include <stdio.h> 
#include <conio.h>
#include <string.h>
struct address   
{  
    char city[20];  
    int pin;  
    char phone[14];  
};  
struct employee  
{  
    char name[20];  
    struct address add;  
};  
void main ()  
{  
    struct employee emp;  
    printf("Enter name\n");  
    scanf("%s",&emp.name);
    printf("enter your city:\n");
    scanf("%s",&emp.add.city);
    printf("enter your pin:\n");
    scanf("%d",&emp.add.pin);
    printf("enter your phone number:\n");
    scanf("%s",&emp.add.phone);
    printf("your information is here ....\n");  
    printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);  
}  
