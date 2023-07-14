#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    printf("Enter Name: ");
    gets(name);
    printf("reverse= %s", strrev(name));
    return 0;
}