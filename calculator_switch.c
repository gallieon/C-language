// C Program To Make a Simple Calculator Using switch...case
#include <stdio.h>
int main(){
    char ch;
    int a, b, result;
    
    // Asking for Input
    printf("Enter an Operator (+, *, *, /): \n ");
    scanf("%c", &ch);
    printf("Enter first integer: \n");
    scanf("%d", &a);
    printf("Enter second integer: \n");
    scanf("%d",&b);
    switch(ch){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
    }
    printf("Result = %d", result);
    return 0;
}
