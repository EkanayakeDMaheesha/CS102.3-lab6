#include <stdio.h>
int main()
{
    int no;
    printf("enter the number");
    scanf("%d",&no);

    if(no%2==0)
        printf("%d is an even number",no);
    else
        printf("%d is an odd number",no);
}
