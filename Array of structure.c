 #include <stdio.h>
 #include <conio.h>
 struct student
 {
    int rollno;
    char name[20];
 };
 int main(){
     int i;
     
     struct student st[5];
 printf("enter record of 5 students");
 for(i=0;i<5;i++)
 {
     printf("\nenter roll no.");
     scanf("%d",&st[i].rollno);
     printf("\nenter name:");
     scanf("%s",&st[i].name);
 }
 printf("\nstudent information list:");
 for(i=0;i<5;i++){
     printf("\nroll: %d, name:%s",st[i].rollno,st[i].name);
 }
     
     
     
     
 }
 
