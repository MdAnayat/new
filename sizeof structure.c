#include<stdio.h>
int main()
{
  char test = 'h';
  struct C
  {
      int x;
      int y;


  };

   printf("Size of struct: %d\n", sizeof(struct C));
   printf("Size of int: %d\n", sizeof(int));
   printf("Size of char: %d", sizeof(char));
   return 0;


}
