#include <stdio.h>
#include <stdlib.h>


float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if(b == 0)
    {
        printf("Division by zero not allowed!\n");
        return 0;
    }

    return a / b;
}


int main()
{
    int choice;
    float num1, num2, result;
    char again;

    do
    {
        printf("\n=================================\n");
        printf("         CALCULATOR MENU\n");
        printf("=================================\n");

        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 5)
        {
            printf("\nThanks for using Calculator Project\n");
            printf("Made by Ganesh Gawali\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        switch(choice)
        {
            case 1:
                result = add(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            case 2:
                result = subtract(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            case 3:
                result = multiply(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            case 4:
                result = divide(num1, num2);
                if(num2 != 0)
                {
                    printf("Result = %.2f\n", result);
                }
                break;

            default:
                printf("Invalid choice!\n");
        }

        printf("\nDo you want to continue? (Y/N): ");
        scanf(" %c", &again);

    } while(again == 'Y' || again == 'y');


    printf("\nThanks for using Calculator Project\n");

    return 0;
}

 
