#include <stdio.h>


void drawHeading() 
{
    printf("\n===========================================\n");
    printf("         TABLE GENERATOR      \n");
    printf("===========================================\n\n");
}

void printStyledTable(int number) 
{
    printf("+-----------+\n");
    printf("| Table of %d |\n", number);
    printf("+-----------+\n");
    for (int i = 1; i <= 10; i++) 
    {
        printf("| %d x %d = %d |\n", number, i, number * i);
    }
    printf("+-----------+\n\n");
}


void printTablesHorizontally(int start, int end) 
{
    printf("-------------------------------------------------------------\n");
    for (int i = 1; i <= 10; i++) 
    {
        for (int num = start; num <= end; num++) 
        {
            printf("%d ", num * i);
        }
        printf("\n");
    }
    printf("-------------------------------------------------------------\n");
}



int main() 
{
    int number, start, end;
    char choice;

    drawHeading();

    do 
    {
        int option;

        printf("Do you want to generate a table for:\n");
        printf("1. Single number\n2. Range of numbers\nEnter your choice (1 or 2): ");
        scanf("%d", &option);

        if (option == 1) 
        {
            printf("\nEnter a number: ");
            scanf("%d", &number);

            if (number <= 0) 
            {
                printf("\n Please enter a positive number only!\n\n");
            } else 
            {
                printStyledTable(number);
            }

        } else if (option == 2) 
        {
            printf("\nEnter start number: ");
            scanf("%d", &start);
            printf("Enter end number: ");
            scanf("%d", &end);

            if (start <= 0 || end <= 0 || start > end)
            {
                printf("\n Invalid range. Start and end must be positive and start <= end.\n\n");
            } else 
            {
                printf("\nMultiplication Tables from %d to %d:\n\n", start, end);
                printTablesHorizontally(start, end);
            }

        } else 
        {
            printf("\n Invalid option! Please select 1 or 2.\n\n");
        }

        printf("\nDo you want to generate another table? (Y/N): ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf("\n Thank you for using Table Generator!\n");
  
    return 0;
}



