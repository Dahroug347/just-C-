#include <stdio.h>
#include <stdlib.h>

struct
{
    char name[10];
    int grade;
    char ty;
}tallat,mohamed,mahmoud;


int main()
{

    int x = 0;

            int sizeOfArr1 = 3,  sizeOfArr2 =3;

            int** arr1 = (int**) malloc(sizeof(int*)*3);

            for (int i = 0; i<sizeOfArr1; i ++)
            {
                arr1[i] = (int*) malloc(sizeof(int)* sizeOfArr1);
            }// = //{ {1,2,3}, {0,5,0}, {4,1,2} };

            int** arr2 = (int**) malloc(sizeof(int*)*3);

            for (int i = 0; i<sizeOfArr2; i ++)
            {
                arr2[i] = (int*) malloc(sizeof(int)* sizeOfArr2);
            }
//    int arr1[3][3];
//    int arr2[3][3];// =  //{ {0,0,0}, {1,1,1}, {2,2,2} };


 for (int row=0; row<3; row++)
    {
        for (int colom=0; colom<3; colom++)
        {
            scanf("%d", &arr1[row][colom] );
        }

    }
    for (int row=0; row<3; row++)
    {
        for (int colom=0; colom<3; colom++)
        {
            scanf("%d", &arr2[row][colom] );
        }

    }

    for (int row=0; row<3; row++)
    {
        for (int colom=0; colom<3; colom++)
        {
            for (int index=0; index<3  ; index++)
            {
                x +=   ( (arr1[row][index])*(arr2[index][colom]) ) ;

            }
            printf("%d ", x);
            x = 0;
        }
        printf("\n");
    }


return 0;
}
