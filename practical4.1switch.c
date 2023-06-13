#include <stdio.h>
int main()
{
    int no;
    printf("enter the number");
    scanf("%d",&no);
    switch(no%2)
    {
        case 0:printf("%d is an even number", no);break;
        case 1:printf("%d is an odd number",no);break;
        default : printf("invalid input");
    }

}
