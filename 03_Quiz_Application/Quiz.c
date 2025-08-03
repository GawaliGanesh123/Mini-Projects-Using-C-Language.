#include <stdio.h>
#include <stdlib.h>


int main() 
{
    char answer;
    int score = 0;


    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("A. Mumbai\nB. Delhi\nC. Kolkata\nD. Chennai\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') 
    {
        printf(" Great! Correct answer.\n");
        score++;
    } else 
    {
        printf(" Oops! Wrong answer.\n");
    }


    // Question 2
    printf("\nQ2. Which language is used to write operating systems?\n");
    printf("A. Python\nB. Java\nC. C\nD. HTML\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') 
    {
        printf(" Great! Correct answer.\n");
        score++;
    } else 
    {
        printf(" Oops! Wrong answer.\n");
    }


    // Question 3
    printf("\nQ3. Who is known as the father of C language?\n");
    printf("A. Dennis Ritchie\nB. Bjarne Stroustrup\nC. James Gosling\nD. Guido van Rossum\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') 
    {
        printf(" Great! Correct answer.\n");
        score++;
    } else 
    {
        printf(" Oops! Wrong answer.\n");
    }


    // Question 4
    printf("\nQ4. What does CPU stand for?\n");
    printf("A. Central Process Unit\nB. Central Processing Unit\nC. Control Processing Unit\nD. Central Processor Utility\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') 
    {
        printf(" Great! Correct answer.\n");
        score++;
    } else 
    {
        printf(" Oops! Wrong answer.\n");
    }


    // Question 5
    printf("\nQ5. What is the extension of a C source file?\n");
    printf("A. .exe\nB. .java\nC. .c\nD. .py\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') 
    {
        printf(" Great! Correct answer.\n");
        score++;
    } else 
    {
        printf(" Oops! Wrong answer.\n");
    }


    // Final Result
    printf("\n===========================\n");
    printf("Quiz Completed!\n");
    printf("Your final score is: %d out of 5\n", score);

    if (score >= 3)
        printf(" You Passed!\n");
    else
        printf(" You Failed. Better luck next time!\n");


    return 0;
}
