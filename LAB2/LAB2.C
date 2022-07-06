#include <stdio.h>
#include <conio.h>



void main(void)

{
	int key;

	int row = 15;

	int col = 15;

	int orderNum;

	int iterations = 0;

	int iterate;

	int Num = 1;

	int colInitVal = 15;

	int rowInitVal = 15;

	while(1)

	{

	Num = 1;

	clrscr();
	printf("----------------Magic box lab-----------------\n");

	do

	{
	printf("please insert an odd number: ");
    flushall();
	scanf("%d",&orderNum);
	} while ((orderNum %2) == 0);

	iterations = orderNum*orderNum;

	row = row +(orderNum/2);

	for  ( iterate = 0; iterate < iterations ; iterate++)

		{

			gotoxy(row, col);
			printf("%d", Num);

			if (Num%orderNum != 0)
			{
			 Num ++;

			 if (col == colInitVal)

			  {
			   col = colInitVal+ (orderNum-1);
			  }

			  else
			   col--;


			 if (row == rowInitVal)

				{
				  row = rowInitVal+(orderNum-1);
				}

			 else
			  row --;

			}

		   else

		   {

			Num++;

			 if ( col == (colInitVal+(orderNum-1)) )

			 {
			   col = colInitVal;
			 }
			 else
			  col++;
		   }

		}

	  key =	getch();
	  if (key == 'x')
	  break;
   }

}

