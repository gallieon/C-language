#include <stdio.h>  
#include <string.h>  
struct Employee  
{     
   int id;  
   char name[20];  
   struct Date  
    {  
      int dd;  
      int mm;  
      int yyyy;   
    }doj;  
}e1;  
int main( )  
{  
  
    
//   strcpy(e1.name, "Sonoo Jaiswal");
   printf("enter your name:\n");
   scanf("%s",&e1.name);
    printf("enter your id:\n");
    scanf("%d",&e1.id);
    printf("enter your day(dd):\n");
    scanf("%d",&e1.doj.dd);
        printf("enter your month(mm):\n");
    scanf("%d",&e1.doj.mm);
        printf("enter your year(yyyy):\n");
    scanf("%d",&e1.doj.yyyy);
    
    
    
    printf("this is the employee information:-\n");
   printf( "employee name : %s\n", e1.name);
   printf("employee id: %d\n",e1.id);
   printf( "employee date of joining (dd/mm/yyyy) : %d/%d/%d\n", e1.doj.dd,e1.doj.mm,e1.doj.yyyy);  
   return 0;  
}  
