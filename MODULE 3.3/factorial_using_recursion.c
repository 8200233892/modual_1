#include <stdio.h>
int fact(int num)
{
    if (num)
        return (num * fact(num - 1));
    else
        return 1;
}

int main()
{
    int num;
    printf("Enter number to find fectorial: ");
    scanf("%d", &num);
    printf("factorial of %d is %d\n", num, fact(num));
    return 0;
}