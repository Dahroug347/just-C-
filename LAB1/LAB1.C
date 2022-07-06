#include <stdio.h>
#include <conio.h>


void main (void)

{

 char inputX;

 int intX = 12;

 float fltX = 7;

 char chrX = 'M';


 clrscr();

 printf("first lab : \n\n");

 printf("review intX = %d\n review fltX = %f\n review charX = %c\n", intX, fltX, chrX);


 printf ("\n\nsecond lab: \n");

 printf ("please insert a characher:  ");

 flushall();

 scanf ("%d",&inputX);

 printf("\nthe ACSCII of letter %c  is  %d", inputX, inputX);

 printf("\n\n third lab: \n");

 printf("the hexal representation of intX = %x", intX);
 printf("\nthe octal representation of intX = %o", intX);

 getch();

}
