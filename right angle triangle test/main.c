#include <stdio.h>

void RH ()
{
    unsigned int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    unsigned int a_square = (unsigned int)a*a;
    unsigned int b_square = (unsigned int)b*b;
    unsigned int c_square = (unsigned int)c*c;
    if (a_square==0 || b_square == 0 || c_square==0)
    {

        printf("equation input error");
    }
    else
    {
        if ((a_square+b_square == c_square))
        {

           printf("%d + %d = %d \n",a_square,b_square ,c_square);
           printf( "yes");

        }

       else if ((b_square+c_square == a_square))
        {

          printf("yes");

        }
        else
        {
           printf("its not a right angle triangle. \n ");
        }

    }
}

int main()
{
RH();
    return 0;

}
