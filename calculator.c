#include <stdio.h>

int main()
{

    float num1, num2, result;
    char ch;

    printf("Input first Number: ");
    scanf("%f %c %f", &num1,&ch,&num2);

    // printf("operator choose: ");
    // scanf(" %c", &ch);

    // printf("Input Second Number: ");
    // scanf("%f", &num2);

    switch (ch)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            printf("\nPlease choose an operator \n");
            break;
    }

    printf("Result: %.2f %c %.2f = %.2f\n", num1, ch, num2, result);
    return 0;
}