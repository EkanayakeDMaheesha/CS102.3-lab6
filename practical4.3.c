#include <stdio.h>
#define PI 3.14159
int main()
{
    float radius,answer;
    char sign;

    printf("Enter a radius no:");
    scanf("%f",&radius);

    printf("Calculation Menu\n");
    printf("The circumference of a circle : C \n");
    printf("The area of a circle : A \n");
    printf("the volume of a sphere : V \n\n");

    printf("enter the sign \n");
    scanf(" %c",&sign);

    switch(sign)
    {
     case 'C':printf("The circumference is %.2f",2*PI*radius);break;
     case 'A':printf("The area is %.2f",PI*radius*radius);break;
     case 'V':printf("The volume is %.2f",3%4*PI*radius*radius*radius);break;
     default:printf("invalid input\n");

    }


}
