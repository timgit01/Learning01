#include <stdio.h>
int main()
{
    printf("\nHi there!");
    int age, i;
    char first_name[20], last_name[20], answer[5];
    printf("\nEnter your first name: ");
    scanf("%s", &first_name);
    printf("Enter your last name: ");
    scanf("%s", &last_name);
    printf("\nHello, %s %s.", first_name, last_name);
    return 0;
}