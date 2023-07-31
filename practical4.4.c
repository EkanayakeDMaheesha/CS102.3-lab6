#include <stdio.h>
int main()
{
  char character;

  printf("enter a character:");
  scanf("%c",&character);

  switch(character)
  {
      case 'A':
      case 'a':
      case 'E':
      case 'e':
      case 'I':
      case 'i':
      case 'O':
      case 'o':
      case 'U':
      case 'u':
          printf("it is a vowel");break;
      default:printf("it is not a vowel");
  }
}
