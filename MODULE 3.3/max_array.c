#include <stdio.h>
int main()
{
    int n, max;
    printf(" Enter array size : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter numbers: ");
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("maximum number is %d", max);
    return 0;
}