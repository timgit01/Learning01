#include <stdio.h>
#include <ctype.h>
void capitalizeString(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        str[0] = toupper(str[0]);
        i++;
    }
}
int main()
{
    printf("\nHi there!");
    int age;
    char first_name[20], last_name[20], answer[5];
    printf("\nEnter your first name: ");
    scanf("%s", first_name);
    printf("Enter your last name: ");
    scanf("%s", last_name);
    capitalizeString(first_name);
    capitalizeString(last_name);
    printf("\nHello, %s %s.", first_name, last_name);
    printf("\nEnter your age: ");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("\nYou are eligible to vote.");
        if (age > 30)
        {
            printf("\nYou are also eligible to run elections.");
            printf("\nWould you like to run elections (y/n): ");
            scanf("%s", answer);
            switch (answer[0])
            {
            case 'y':
                printf("\nPlease enter your verification key: ");
                scanf("%s", answer);
                if (answer[0] == first_name[0])
                {
                    int operation;
                    printf("\nPlease enter the code based on the following operation,\n((1) : New Party, (2) : Existing party, (3) : Abort): ");
                    scanf("%d", &operation);
                    switch (operation)
                    {
                    case 1:
                        printf("Please contact the primary election committee.");
                        break;
                    case 2:
                        printf("Please contact the secondary election committee.");
                        break;
                    case 3:
                        break;
                    default:
                        printf("Invalid input.");
                    }
                }
                else
                {
                    printf("\nVerification key does not match the first letter of your first name.");
                }
                break;
            case 'n':
                printf("\nYou can continue with voting.");
                break;
            default:
                printf("\nInvalid input.");
            }
        }
    }
    else
    {
        printf("\nYou are below 18, you cannot vote.");
    }
    return 0;
}