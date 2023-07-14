#include <stdio.h>
#include <string.h>
struct employe
{

    char emp_name[20];
    unsigned long long int emp_mobile_no;
    int emp_age;
    char emp_add[100];
};
int main()
{
    int i;
    struct employe obj[5];
    for (int i = 0; i < 2; i++)
    {
        printf("%s Enter your name : ", i + 1);
        scanf(" ");
        gets(obj[i].emp_name);

        printf("%llu Enter your mobile number : ", i + 1);
        scanf("%llu", &obj[i].emp_mobile_no);

        printf("%d Enter your age : ", i + 1);
        scanf("%d", &obj[i].emp_age);

        printf("%s Enter your address : ", i + 1);
        scanf(" ");
        gets(obj[i].emp_add);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("\nYour name is : %s\n", obj[i].emp_name);
        printf("Your mobile number is : %llu\n", obj[i].emp_mobile_no);
        printf("Your age is : %d\n", obj[i].emp_age);
        printf("Your address is : %s\n\n", obj[i].emp_add);
    }
}