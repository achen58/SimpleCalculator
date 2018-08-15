#include <stdio.h>

int main() {
    float num1;
    float num2;
    char operation; // * / + - 
    
    printf("Welcome to Simple Calculator! \n");
    printf("Type in number 1: \n",num1);
    scanf("%f",&num1);
    printf("Type in number 2: \n",num2);
    scanf("%f",&num2);
    printf("What operation do you want to use? (+ - * / ) \n");
    scanf(" %c",&operation);
    if(operation == '+'){
        printf("Total = %.2f\n",num1+num2);
    }
    else if(operation == '-'){
        printf("Total = %.2f\n",num1-num2);
    }
    else if(operation == '*'){
        printf("Total = %.2f\n",num1*num2);
    }
    else if(operation == '/'){
        printf("Total = %.2f\n",num1/num2);
    }
    else {
        printf("Please type in correct operation. \n");
    }
    return 0;
}
