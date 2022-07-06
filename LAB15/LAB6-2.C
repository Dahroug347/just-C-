#include <stdio.h>
#include <conio.h>


void arrayRead (int* ptr, int size);
void arrayPrint (int* ptr, int size);

int main(void)
{
    int arr[5];
    clrscr();
    printf("\n______________________________read and print array funcs________________________");
    printf("\n\n please insert your array: ");
    arrayRead(arr, 5);
    printf("\n\n So the array is: ");
    arrayPrint(arr, 5);
    getch();

    return 0;
}

void  arrayRead (int* ptr, int size)
{
    int i;
    for (i = 0; i<size; i++)
    {
       scanf("%d", &ptr[i]);
    }
}

void arrayPrint (int * ptr, int size)
{
    int i;
    for (i = 0; i<size; i++)
    {
       printf("%d\t", ptr[i]);
    }
}
