#include <stdio.h>
#include <conio.h>

/* console display */
#define   NORMAL_TEXT       0x0F
#define   HIGHLIGHTED_TEXT  0xF0

/* menu items */
#define   NEW                   0
#define   DISPLAY               1
#define   EXIT                  2

/**** key Values ****/

/* extended keys*/
#define   UP_ARROW              72
#define   DOWN_ARROW            80
#define   HOME                  71
#define   END                   79
/* normal keys*/
#define   ENTER                 13
#define   ESCAPE                27


typedef struct emp
{
	float age;
	float salary;
	float netSalary;
	float deduction;
	int name;
	int ID;
}emp;



void main (void)

{
	int key;
	int col = 5;
	int ch;
	int i;
	int pos = 0;
	int terminated = 0;
	char menu [3][10] = {   "New      ", "Display  ",  "Exit     " };
	emp e;



do
	{

	clrscr();

	printf("\n -------------------The Menu task--------------------");

	  for ( i = 0; i<3; i++)
	  {
		 gotoxy(10,col);

		 if ( pos == i)
		 {
		  textattr(HIGHLIGHTED_TEXT);
		  cprintf("%d%c %s", (i+1), ')', menu[i]);
		 }


		 else
		 printf("%s", menu[i]);

		 col += 2;
	  }

	textattr(NORMAL_TEXT);
	col = 5;
	ch = getch();

 switch (ch)
 {
	case UP_ARROW:

			flushall();

			if (pos == 0)
			pos = 2;

			else
			pos --;

		break;

	case DOWN_ARROW:

			flushall();

			if (pos == 2)
			pos = 0;
			else
			pos ++;
		break;

	case HOME:
			flushall();
			pos = 0;
		break;

	case END:
			flushall();
			pos = 2;
		 break;

	case ENTER:
			switch (pos)

                {
                case NEW:
                    clrscr();
                    gotoxy(10,10);
					printf(" you can add new employee or press any key to continue !\n");
					key = getch();

					break;

                case DISPLAY:

                    clrscr();
					gotoxy(10,10);
					printf(" here is DISPLAY press any key to continue !\n");
					key = getch();

                    break;

                case EXIT:
                    terminated = 1;
                    break;

                }

        break;

    case ESCAPE:
            terminated = 1;
        break;

        default:
        clrscr();
        printf("\n\n bad ascii");
        break;
 }

    } while (!terminated);

}

