#include <stdio.h>

int main() 
{
    int bDay, bMonth, bYear;
    int cDay, cMonth, cYear;
    int totalDays = 0, years, months, weeks;

    printf("===============================\n");
    printf("       YEAR CALCULATOR        \n");
    printf("===============================\n");

    

    printf("Enter your Date of Birth (DD MM YYYY): \n");
    scanf("%d\t%d\t%d", &bDay, &bMonth, &bYear);


    printf("Enter current date (DD MM YYYY): \n");
    scanf("%d %d %d", &cDay, &cMonth, &cYear);


    years = cYear - bYear;
    months = (years * 12 + (cMonth - bMonth));
    totalDays = (months * 30 + (cDay - bDay));
    weeks = totalDays / 7;



    printf("\n========= AGE DETAILS =========\n");
    printf("Years  : %d\n", years);
    printf("Months : %d\n", months);
    printf("Weeks  : %d\n", weeks);
    printf("Days   : %d\n", totalDays);
    printf("================================\n");

    return 0;
}



