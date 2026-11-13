
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char name[50], email[50], password[20], repeat_password[20];
    char login_email[50], login_password[20];

    int choice;
    int attempts;
    int registered = 0;

    while(1)
    {
        printf("\n********************************\n");
        printf("*         LOGIN SYSTEM         *\n");
        printf("********************************\n");
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n===== REGISTRATION =====\n");

                // Name Input
                printf("Enter Name: ");
                scanf(" %49[^\n]", name);

                // Email Input
                printf("\nEnter Email: ");
                scanf(" %49s", email);

                // Password Input
                printf("\nEnter Password: ");
                scanf(" %19s", password);

                // Repeat Password
                printf("\nRepeat Password: ");
                scanf(" %19s", repeat_password);

                if(strcmp(password, repeat_password) != 0)
                {
                    printf("\nPasswords do not match!\n");
                }
                else
                {
                    registered = 1;
                    printf("\nRegistration Successful!\n");
                }
                break;

            case 2:
                if(registered == 0)
                {
                    printf("\nPlease register first!\n");
                    break;
                }

                attempts = 3;

                while(attempts > 0)
                {
                    printf("\n===== LOGIN =====\n");

                    printf("Enter Email: ");
                    scanf(" %49s", login_email);

                    printf("Enter Password: ");
                    scanf(" %19s", login_password);

                    if(strcmp(email, login_email) == 0 &&
                       strcmp(password, login_password) == 0)
                    {
                        printf("\nLogin Successful! Welcome %s\n", name);
                        break;
                    }
                    else
                    {
                        attempts--;

                        printf("\nInvalid Email or Password!\n");
                        printf("Attempts left: %d\n", attempts);
                    }
                }

                if(attempts == 0)
                {
                    printf("\nAccount Locked! Too many failed attempts.\n");
                }

                break;

            case 3:
                printf("\nThank you! Exiting program...\n");
                exit(0);

            default:
                printf("\nInvalid Choice! Try again.\n");
        }
    }

    return 0;
}
