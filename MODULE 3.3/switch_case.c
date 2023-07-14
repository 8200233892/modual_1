#include <stdio.h>
int main()
{
    int a, b;
    char choice;

    printf("Choose any one:-\n");
    printf("A. Addition\nB. Subtraction\nC. Multiplication\nD. Division\n");
    scanf("%c", &choice);

    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter second numbers: ");
    scanf("%d", &b);

    switch (choice)
    {
    case 'a':
        printf("addition of number is %d", a + b);
        break;

    case 'b':
        printf("Subtraction of number is %d", a - b);
        break;

    case 'c':
        printf("Multiplication of number is %d", a * b);
        break;

    case 'd':
        printf("Division of number is %d", a / b);
        break;

    default:
        printf("invaild");
        break;
    }

    return 0;
}