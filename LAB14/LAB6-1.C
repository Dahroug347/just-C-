#include <stdio.h>
#include <conio.h>

void swap (int*, int*);

int main(void)
{
    int x, y;
    clrscr();
    printf("\n______________________________swap function lab________________________");
    printf("\n\n please insert value of x: ");
    scanf("%d", &x);
    printf("\n\n please insert value of y: ");
    scanf("%d", &y);
    printf("\n\n so now value of x = %d and value of y = %d ", x, y);

    swap (&x,&y);

    printf("\n\n and after swaping value of x = %d and value of y = %d ", x, y);

    getch();

    return 0;
}


void swap (int* x, int*y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
