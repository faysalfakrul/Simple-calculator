#include<stdio.h>
#include<float.h>

int main(){
    char operator;
    double x,y,result;

    printf("Enter an operator (+,-,*,/): ");
    scanf("%c", &operator);

    printf("Enter an operands: ");
    scanf("%lf%lf", &x,&y);

    switch (operator)
    {
    case '+':
        result=x+y;
        break;
    case '-':
        result=x-y;
        break;
    case '*':
        result=x*y;
        break;
    case '/':
        result=x/y;
        break;
    default:
        printf("Error! Incorrect operator value.");
        result=-DBL_MAX;
        break;
    }
if(result!=-DBL_MAX){
    printf("%2lf",result);
}
    return 0;
}