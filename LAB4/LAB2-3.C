#include <stdio.h>
#include <conio.h>

int key;

void main (void)

{
	int choice;
	clrscr();

	while(1)

	{   clrscr();

		printf("---------------------------- menu task --------------------------");

		printf ("\nplease chooce one option: ");

		gotoxy(10,10);

		printf("1) choice 1");

		gotoxy(10,12);

		printf("2) choice 2");

		gotoxy(10,14);

		printf("3) choice 3");

		gotoxy(10,16);

		printf("4) exit");

		scanf ("%d", &choice);

		while ((choice <1) || (choice >= 5 ))
		{
		  gotoxy(10,18);
		  printf("please choose an available option !\n");
		  scanf("%d", &choice);

		}

		if (choice == 4)
		break;

		else
		{
		  switch (choice)
		  {


			case 1:

			clrscr();
			gotoxy(15,15);
			printf("CHOICE 1");
			gotoxy(5,20);
			printf("press b to go back or any key to continue: ");
			key = getch();
			break;

			case 2:

			clrscr();
			gotoxy(15,15);
			printf("CHOICE 2");
			gotoxy(5,20);
			printf("press b to go back or any key to continue:");
			key = getch();
			break;

			case 3:

			clrscr();
			gotoxy(15,15);
			printf("CHOICE 3");
			gotoxy(5,20);
			printf("press b to go back or any key to continue: ");
			key = getch();
			break;

		  }

		}
		printf(" %c", key);
		if (key == 'b')
		{
		getch();
		continue;
		}

		else
		getch();
		break;
	}

}