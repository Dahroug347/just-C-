#include <stdio.h>
#include <stdlib.h>

typedef union
{
   struct
   {
    unsigned char bit_0 : 1,
         bit_1 : 1,
         bit_2 : 1,
         bit_3 : 1,
         bit_4 : 1,
         bit_5 : 1,
         bit_6 : 1,
         bit_7 : 1;

   }byte_bit;

 unsigned char byte;

}byte_access;
// enum week
//    {
//        sat,
//        sun,
//        mon
//
//    };


int main()
{
    byte_access my_byte;

    my_byte.byte = 0;
  printf ("the default byte %x", my_byte.byte);

    my_byte.byte_bit.bit_1 = 1;
    my_byte.byte_bit.bit_2 = 1;
    my_byte.byte_bit.bit_7 = 1;

  printf (" \nthe default byte %x", my_byte.byte);
//   enum week day = 10;
//    printf("%d", day);
    return 0;
}
