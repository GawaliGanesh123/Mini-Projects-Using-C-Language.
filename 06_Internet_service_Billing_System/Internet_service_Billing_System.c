
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char name[50];
    char start_date[20];
    char end_date[20];
    char phone_number[15];

    int choice;
    int days;

    float price_per_day = 20.0;
    float total_bill;

    struct tm start = {0}, end = {0};
    time_t start_time, end_time;

    while(1)
    {
        printf("\n========================================\n");
        printf("        INTERNET SERVICE SYSTEM\n");
        printf("========================================\n");
        printf("1. New Connection\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 2)
        {
            printf("\nThank You For Using Our Service!\n");
            break;
        }

        if(choice != 1)
        {
            printf("Invalid choice! Try again.\n");
            continue;
        }

        printf("\n----- Customer Registration -----\n");

        // Full Name
        printf("Enter Your Full Name: ");
        scanf(" %49[^\n]", name);

        // Start Date
        printf("Enter Start Date (DD/MM/YYYY): ");
        scanf("%19s", start_date);

        // End Date
        printf("Enter End Date (DD/MM/YYYY): ");
        scanf("%19s", end_date);

        // Phone Number
        printf("Enter Phone Number: ");
        scanf("%14s", phone_number);

        // Date Input
        if(sscanf(start_date, "%d/%d/%d",
                  &start.tm_mday,
                  &start.tm_mon,
                  &start.tm_year) != 3 ||
           sscanf(end_date, "%d/%d/%d",
                  &end.tm_mday,
                  &end.tm_mon,
                  &end.tm_year) != 3)
        {
            printf("Invalid Date Format!\n");
            continue;
        }

        start.tm_mon -= 1;
        start.tm_year -= 1900;

        end.tm_mon -= 1;
        end.tm_year -= 1900;

        start.tm_hour = 12;
        end.tm_hour = 12;

        start.tm_isdst = -1;
        end.tm_isdst = -1;

        // Convert Date into Time
        start_time = mktime(&start);
        end_time = mktime(&end);

        if(start_time == -1 || end_time == -1 ||
           start.tm_mday == 0 || end.tm_mday == 0 ||
           end_time < start_time)
        {
            printf("Invalid Date Range!\n");
            continue;
        }

        // Calculate Days Automatically
        days = (int)(difftime(end_time, start_time) / 86400);

        // Calculate Total Bill
        total_bill = days * price_per_day;

        // Bill Receipt
        printf("\n=========== BILL RECEIPT ===========\n");
        printf("Customer Name : %s\n", name);
        printf("Phone Number  : %s\n", phone_number);
        printf("Start Date    : %s\n", start_date);
        printf("End Date      : %s\n", end_date);
        printf("Days Used     : %d\n", days);
        printf("Price/Day     : %.2f\n", price_per_day);
        printf("Total Bill    : %.2f\n", total_bill);
        printf("====================================\n");

        printf("\nThank You %s For Using Our Internet Service!\n", name);
    }

    return 0;
}
