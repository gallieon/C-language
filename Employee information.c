#include<stdio.h>
void main ()
{
    char name[40];
    int p,a,pds,d=30,id,t;
    int pf,esi,b,b2,c,g,e,f;
    printf("enter your name\n");
    scanf("%s",&name);
    printf("enter your id\n");
    scanf("%d",&id);
    printf("enter present\n");
    scanf("%d",&p);
    printf("enter per day salary\n");
    scanf("%d",&pds);
    a=d-p;
    t=p*pds;
    b=0.02*t;
    pf=0.05*t;
    b2=0.02*t;
    esi=0.02*t;
    c=pf+esi;
    g=t-c;
    e=b+b2;
    f=g+e;
    
    
    printf("\n__________________________________________________________________________\n");
    printf("your name is: %s\n your id is: %d\n",name,id);
    printf("______________________________________________________________\n");
    printf("your persent %d |\t your absent is: %d",p,a);
    printf("\n____________________________________________________________\n");
    printf("your total salaryis:%d || your pf is: %d ||\t your esi is: %d ",t,pf,b,esi,b2);
    printf("\n_____________________________________________________________\n");
    printf("your grow salary is:%d|| \t your bonus is :%d",pf,esi);
}

