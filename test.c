#include <stdio.h>
int main()
{
    printf("\nHi there!");
    int i, age;
    char first_name[20], last_name[20], answer[5];
    printf("\nEnter your first name: ");
    scanf("%s", &first_name);
    printf("Enter your last name: ");
    scanf("%s", &last_name);
    printf("\nHello, %s %s.", first_name, last_name);
    printf("\nEnter your age: ");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("\nYou are eligible to vote.");
        if (age > 30)
        {
            printf("\nYou are also eligible to run elections.");
            printf("\nWould you like to run elections: ");
            scanf("%s", &answer);
            switch (answer[0])
            {
            case 'y':
                printf("\nPlease contact election committee.");
                break;
            case 'n':
                printf("\nYou can continue with voting.");
            default:
                printf("Invalid input.");
                break;
            }
        }
    }
    else
    {
        printf("\nYou are below 18, You cannot vote.");
    }
    return 0;
}