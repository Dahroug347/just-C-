#include <stdio.h>
#include <conio.h>


void strcopy (char* str1, char* str2);

int main(void)
{
    char arr2[]= "Mahmoud";
    char arr1[] ={0};
    char i = 0;
    clrscr();
    printf("\n______________________________string copy lab________________________");

    printf("\n\n the copied string is: ");
    strcopy (arr1, arr2);

    getch();

    return 0;
}

void strcopy (char* str1, char* str2)
{
    char i = 0;
    char j;

    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }

    for (j = 0; j <i; j++)
    {
        printf("%c",str1[j]);
    }
}
