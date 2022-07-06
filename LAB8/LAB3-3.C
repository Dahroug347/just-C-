#include <stdio.h>
#include <conio.h>



void main(void)

{
    int key;
    int arr[3][4];
    int i, j;
    int x, y;
    int R = 1, C = 1;
    int sumR = 0;
    float avgC1 = 0, avgC2 = 0, avgC3 = 0, avgC4 = 0;

    clrscr();

    gotoxy(5,2);
    printf("-------------lab3 (matrix lab)-------------");

	gotoxy(5,4);
	printf("please insert your array: ");


	for (i = 0; i < 3; i++)
	{
		for (j = 0; j<4; j++)
		{
			scanf("%d", &arr[i][j]);
		}

    }

	gotoxy(5,8);
	printf("inserted array is: ");

	x = 6;
	y = 10;
	gotoxy(x, y);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j<4; j++)
		{
			printf("%d  ", arr[i][j]);
			sumR += arr[i][j];
		}
		printf("  -sum of row%d = %d", R, sumR);
		R++;
		sumR = 0;
		y+= 2;
		gotoxy(x,y);
	}

	gotoxy(x, y+2);

  for (i = 0; i < 3; i ++)
  {
	  for (j = 0 ; j< 4; j++)
	{
		if (j == 0)
		{
			avgC1 += (float)arr[i][j];
			if ( i == 2)
				avgC1 /= 3;
		}
		else if (j == 1)
		{
			avgC2 += (float)arr[i][j];
			if ( i == 2)
				avgC2 /= 3;
		}
		else if (j == 2)
		{
			avgC3 += (float)arr[i][j];
			if ( i == 2)
				avgC3 /= 3;
		}
		else
		{
			avgC4 += (float)arr[i][j];
			if ( i == 2)
				avgC4 /= 3;
		}
	}
  }

	y++;
	gotoxy(x, y);
	printf("average of col1 = %f", avgC1);
	y++;

	gotoxy(x, y);
	printf("average of col2 = %f", avgC2);
	y++;

	gotoxy(x, y);
	printf("average of col3 = %f", avgC3);
	y++;

	gotoxy(x, y);
	printf("average of col4 = %f", avgC4);
	y++;


	key = getch();

}