#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (void)

{
    int N, M, i, j;
    int col = 1;
    char  **aStr;

	clrscr();
	printf("\n -------------------string  task--------------------");

	printf("\n please insert number of needed strings: ");
	scanf("%d", &N);

	aStr = (char**)malloc(N*sizeof(char*));

	for (i = 0; i<N; i++)
    {
        printf("\n please insert number of charachters in string %d: ", (i+1));
        scanf("%d", &M);
        printf("\n here: ");
        aStr[i] = (char*)malloc(M*sizeof(char));
        scanf("%s", aStr[i]);
        printf("\n");
    }

    gotoxy(60, col);
	printf("\n\nthe inserted strings:");
    col = 3;
    for (i = 0; i<N; i++)
    {
        gotoxy(60,col );
		printf("string %d) ", (i+1));
        puts(aStr[i]);
        col+= 3;
	}
	for (i = 0; i <N; i++)
	{
		free(aStr[i]);
	}

	free (aStr);

getch();
}
