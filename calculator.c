#include <stdio.h>
#include <conio.h>
int main()
{
    int num1,num2;
    float result;
    char ch;    //here you have to enter the integer
    printf("Enter first number:\n");
    scanf("%d",&num1);
    printf("Enter second number:\n");
    scanf("%d",&num2);
    printf("Choose operation to perform (+,-,*,/):");    //here you have to enter the oprator or symbol
    scanf(" %c",&ch);
    result=0;
    switch(ch)    //switch start
    {
    case '+':
    result=num1+num2;
    break;
    case '-':
    result=num1-num2;
    break;
    case '*':
    result=num1*num2;
    break;
    case '/':
    result=num1/num2;
    break;
    case '%':
    result=num1%num2;
    break;
    default:        //switch end
    printf("Invalid operation.\n please enter a valid operation...\n");
    }
    printf("Result: %d %c %d=%f\n",num1,ch,num2,result);
    
}


