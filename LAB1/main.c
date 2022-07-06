#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void increment(int *v) {
        (*v)++;

}
int main()
{


//    float rational;
//    int negative;
//    unsigned int positive;
//    char charachter;

        int a;
        scanf("%d", &a);
        increment(&a);
        printf("%d", a);
    	return 0;

    scanf("%f", &rational);
     flushall();
    scanf("%d", &negative);
     flushall();
    scanf("%u", &positive);
     flushall();
    scanf("%c", &charachter);
     flushall();

    printf("printing numbers in their forms: \n");
    flushall();
    printf(" float = %f\n signed_int = %d\n unsigned_int = %u\n char = %c\n", rational, negative, positive, charachter);
    flushall();
    printf("printing numbers & charachters in for of hex only: \n");
    printf(" float = %x\n signed_int = %x\n unsigned_int = %x\n char = %x\n", rational, negative, positive, charachter);






}
