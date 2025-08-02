#include <stdio.h>

float calculateCircle(float radius) 
{
    return 3.14f * radius * radius;
}

float calculateRectangle(float length, float width) 
{
    return length * width;
}

float calculateTriangle(float base, float height) 
{
    return 0.5f * base * height;
}

float calculateSquare(float side) 
{
    return side * side;
}

int main() 
{
    int choice;
    float area, a, b;

    while (1) 
    {
        printf("\n==============================\n");
        printf("       AREA CALCULATOR        \n");
        printf("==============================\n");
        printf("1. Circle\n");
        printf("2. Rectangle\n");
        printf("3. Triangle\n");
        printf("4. Square\n");
        printf("5. Exit\n");
        printf("Enter choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter radius: ");
                scanf("%f", &a);
                area = calculateCircle(a);
                printf("Area = %.2f\n", area);
                break;
            case 2:
                printf("Enter length and width: ");
                scanf("%f %f", &a, &b);
                area = calculateRectangle(a, b);
                printf("Area = %.2f\n", area);
                break;
            case 3:
                printf("Enter base and height: ");
                scanf("%f %f", &a, &b);
                area = calculateTriangle(a, b);
                printf("Area = %.2f\n", area);
                break;
            case 4:
                printf("Enter side length: ");
                scanf("%f", &a);
                area = calculateSquare(a);
                printf("Area = %.2f\n", area);
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
