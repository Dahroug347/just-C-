#include <stdio.h>
#include <conio.h>


void main (void)

{
  int sum = 0;
  int x;

  clrscr();
  printf ("------------------- sum exceeded limit ------------------\n" );

  do

  {
	 printf("-------------------------------\nplease insert number: \n");
	 flushall();
	 printf("sum = %d\n", sum);
	 scanf ("%d", &x);
	 sum += x;
  }while (sum <= 100);

  getch();
}


