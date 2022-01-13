#include <stdio.h>
#include <conio.h>
void main()
{
     
    char f_l[15],l_n[50];
    int roll,clss,eng,hin,mat,sci,gk,sst,t_m,per;
    
    printf("enter your full name:\n");
    scanf("%s %s",&f_l,&l_n);
    printf("enter your roll number:\n");
    scanf("%d",&roll);
    printf("enter your class:\n");
    scanf("%d",&clss);
     
    printf("enter the marks of english:\n");
    scanf("%d",&eng);
    printf("enter the marks of hindi:\n");
    scanf("%d",&hin);
    printf("enter the marks of maths:\n");
    scanf("%d",&mat);
    printf("enter the marks of science:\n");
    scanf("%d",&sci);
    printf("enter the marks of genral knowledge:\n");
    scanf("%d",&gk);
    printf("enter the marks of social science:\n");
    scanf("%d",&sst);
    
    t_m=eng+hin+mat+sci+gk+sst;
    per=t_m/6;
    printf("______________________________________________________________________________________");
    printf("\nyour name: %s %s \n",f_l,l_n);
    printf("your roll number: %d \n",roll);
    printf("your class:%d \n",clss);
    printf("your total number:%d \n",t_m);
    printf("your percentage: %d\n",per);
    
    if(per>=0 && per<35){
        printf("you got fail, better luck next time");
    }
    else if(per>=35 && per<45)
    {
        printf("you got third division");
    }
    else if(per>=45 && per<60)
    {
        printf("you got second division");
    }
    else if(per>=60 && per<80)
    {
        printf("you got first division");
    }
    else if(per>=80 && per<90)
    {
        printf("you got first division with very good marks, keep it up.");
    }
    else if(per>=90 && per<100)
    {
        printf("you got first division + merrit, good job");
    }
    else{

        printf("result not found !");
    }
    
}






