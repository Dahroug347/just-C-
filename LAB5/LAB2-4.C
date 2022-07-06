#include <stdio.h>
#include <conio.h>



void main(void)

{
    int key;
	int row = 10;
	int col = 4;
	int i,j;
	int x = 1;
	int y = 1;

    clrscr();
	printf("\n                   ----------------Multiplication lab -----------------\n");

	gotoxy(10, 3);
	printf(" The ascending order");
	for (i = 0; i<10; i++)
    {
        gotoxy(row, col);
        printf("%d", x);

        gotoxy(row, (col+1));
        printf("----");

        x++;
        row+= 4;
    }

    row = 10;
	col = 4;

	for (i = 0; i<10; i++)
	{
		gotoxy((row-4), (col+2));
		printf("%d", y);

		gotoxy((row-2),col+2);
		printf("|");

		gotoxy((row-2),(col+3));
		printf("|");
		y++;
		col+= 2;
	}

  row = 10;
  col = 6;

	for (i = 1; i < 11 ; i++)
	{
		for (j = 1; j < 11; j++)
		{
			gotoxy(row, col);
			printf("%d", i*j);
			col += 2;
		}
		row+= 4;
		col = 6;
	}

	   key = getch();

}