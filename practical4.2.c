
#include <stdio.h>
int main()
{
    int no1,no2;
    float answer;
    char sign;
    printf("enter two numbers \n");
    scanf("%d %d",&no1,&no2);

    printf("menu \n");
    printf("Addition : + \n");
    printf("Subtraction : - \n");
    printf("Multification : * \n");
    printf("Division :  / \n\n");


   printf("enter the sign \n");
    scanf(" %c",&sign);

     switch(sign)
    {
        case '+':printf("Addition is %.2f\n\n",answer = no1 + no2);break;
        case '-':printf("Subtractin is %.2f\n\n",answer = no1 - no2);break;
        case '*':printf("Multificati is %.2f\n\n",answer = no1 * no2);break;
        case '/':printf("Division is %.2f\n\n",answer = no1 / no2);break;
        default:printf("invalid input\n\n");

    }


}


