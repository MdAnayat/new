#include<stdio.h>
int main()
{

  struct C
  {
      int x;
      int y;
      char t;
      char z;
      char p;
      char l;
      char o;
      int m;

  };

   printf("Size of struct: %d\n", sizeof(struct C));
   printf("Size of int: %d\n", sizeof(int));
   printf("Size of char: %d", sizeof(char));
   return 0;


}
