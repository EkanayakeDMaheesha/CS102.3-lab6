#include <stdio.h>
int main()
{
    char month_number;

    printf("enter month number\n");
    scanf("%c",&month_number);

    switch(month_number)
    {
        case '2':
                  printf("28 days are in this month\n");break;
        case '1':
        case '3':
        case '5':
        case '7':
        case '8':
        case '10':
        case '12':
                printf("31 days are in this month\n");break;
        case '4':
        case '6':
        case '9':
        case '11':
                printf("30days are in this month\n");break;
        default:printf("invalid input\n");



    }
}
