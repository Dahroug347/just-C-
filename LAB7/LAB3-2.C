#include <stdio.h>
#include <conio.h>



void main(void)

{
    int key;
    int arr[5] = {4,1,5,0,7};
    int max = arr[0], min = arr[0];
    int i;
    clrscr();

    gotoxy(7,2);
    printf("-------------lab3 get max and min num in array-------------");

    gotoxy(7,4);
    printf("The array is : ");

     for (i = 0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }

    gotoxy(7,6);
    for (i = 0; i<5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Max number in array: %d", max);

    gotoxy(7,8);

    for (i = 0; i<5; i++)
    {
        if (arr[i] < max)
            min = arr[i];
    }
    printf("Min number in array: %d", min);
    key = getch();

}

