#include <stdio.h>
int main()
{
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) 
	{
        case '+':
            printf("%lf + %lf = %lf\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%lf - %lf = %lf\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%lf * %lf = %lf\n", num1, num2, num1 * num2);
            break;

        case '/':
            
            printf("%lf / %lf = %lf\n", num1, num2, num1 / num2);
            break;

        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}

