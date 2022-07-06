#include <stdio.h>
#include <stdlib.h>


int fibonacci_recursive (int fibonacci_sum)
{

    if ((fibonacci_sum == 0) || (fibonacci_sum == 1))
    {
        fibonacci_sum = 0;
    }
    else if (fibonacci_sum == 2)
    {
        fibonacci_sum = 1;
    }
    else
    {
        return (fibonacci_recursive(fibonacci_sum - 1)+ fibonacci_recursive(fibonacci_sum- 2));
    }

    return fibonacci_sum;
}

int fibonacci_for (int fibonacci_sum)
{
    int counter;
    int iteration, term_1 = 0;
    int term_2 = 1;
    if (fibonacci_sum == 2)
    {
        counter = 1;
    }
    else
    {
        counter = fibonacci_sum - 2;
    }

    fibonacci_sum = 0;
    for (iteration=0; iteration < counter; iteration++)
    {
       fibonacci_sum = term_1 + term_2;
       term_1 =  term_2;
       term_2 = fibonacci_sum;
    }
    return fibonacci_sum;
}

int fibonacci_while (int fibonacci_sum)
{
    int counter;
    int iteration = 0;
    int term_1 = 0;
    int term_2 = 1;
    if (fibonacci_sum == 0 || fibonacci_sum == 1)
    {
        counter = 0;
    }
    else if (fibonacci_sum == 2)
    {
        counter = 1;
    }
    else
    {
        counter = fibonacci_sum -2;
    }

    fibonacci_sum = 0;

    while (iteration != counter)
    {
        fibonacci_sum = term_1 + term_2;
        term_1 = term_2;
        term_2 = fibonacci_sum;
        iteration ++;
    }
    return fibonacci_sum;
}

int main()
{
    int func_recurive, func_for, func_while;
    int number;

    printf("\n");

    printf("\t please insert number of fibonacci position: ");
    scanf("%d", &number);

  func_recurive=   fibonacci_recursive(number);
       printf (" the sum of fibonacci using recursive function = %d\n", func_recurive);

  func_for =  fibonacci_for(number);
       printf (" the sum of fibonacci using for loop = %d\n", func_for);

  func_while =  fibonacci_while(number);
       printf (" the sum of fibonacci using while loop = %d\n", func_while);

    return 0;

//int arr (int *ptr, int x)
//
//{
//    int i;
//    for (i = 0; i<x; i++)
//    {
//        scanf ("%d", &ptr[i]);
//    }
//}
//void swap(int *x, int *y)
//{
//    int temp;
//    temp = *x;
//    *x= *y;
//    *y= temp;
//
//}
//    int array [5];
////    int n = 3;
////    int m = 7;
////    swap (&n,&m);
////
////    printf("x: %d\n y: %d", n, m);
//      arr (array, 5);


}
