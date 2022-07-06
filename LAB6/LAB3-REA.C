#include <stdio.h>
#include <conio.h>



void main(void)

{
    int key;
    int arr[5];
    int i;
    clrscr();

    gotoxy(7,2);

    printf("--------------------lab3 - read array-----------------");
    gotoxy(7,4);
    printf("please insert your array: ");
    for (i = 0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    gotoxy(7,6);
    printf("inserted array is: ");
    for (i = 0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    key = getch();

}