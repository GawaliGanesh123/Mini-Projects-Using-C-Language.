#include <stdio.h>

// Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) 
{
    return (celsius * 9 / 5) + 32;
}

// Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) 
{
    return (fahrenheit - 32) * 5 / 9;
}


void drawHeading() 
{
    printf("\n==============================\n");
    printf("     TEMPERATURE CONVERTER    \n");
    printf("==============================\n");
}

int main() 
{
    int choice;
    float temp, result;
    char again;

    drawHeading();

    do {
        printf("\n1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            result = celsiusToFahrenheit(temp);

            printf("\n------------------------------\n");
            printf("  %.2f Celsius = %.2f Fahrenheit\n", temp, result);
            printf("------------------------------\n");

        } else if (choice == 2) 
        {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            result = fahrenheitToCelsius(temp);

            printf("\n------------------------------\n");
            printf("  %.2f Fahrenheit = %.2f Celsius\n", temp, result);
            printf("------------------------------\n");

        } else 
        {
            printf("\n Invalid choice. Please enter 1 or 2.\n");
        }

        printf("\nDo you want to convert another temperature? (Y/N): ");
        scanf(" %c", &again);

    } while (again == 'Y' || again == 'y');

    printf("\n Thank you for using the Temperature Converter!\n");
    return 0;
}


