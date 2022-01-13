 #include <stdio.h>
 #include <conio.h>
 #include <string.h>
 struct employee
 {
     int id;
     char name[50];
 }
 e1;
 int main()
 {
     e1.id=200;
     strcpy(e1.name,"arjun sunami");
      
     printf("employee 1 id: %d\n",e1.id);
     printf("employee name: %s\n",e1.name);
     
 }
