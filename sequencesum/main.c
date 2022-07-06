#include <stdio.h>
#include <stdlib.h>

int printsequence(unsigned int start,unsigned int end)
{
    printf("\nThe start of the sequence is: \n\n");
    for (int i=start;i<=end;i++)
    {
        printf("%d ",i );
    }
    printf("\n\nThe end of the sequence.");
    return 0;
}
void findsequence (void)
{
    printf("Please choose any number: ");
    unsigned int x;
    scanf("%d",&x);
    unsigned int sum=0, i=0;
    for (i=0;i<=x;i++)
    {
        sum=0;
        for(unsigned int j=i;j<=x;j++)
        {
            sum+=j;
            if (sum==x)
            {
                printsequence(i,j);
                printf("\n------------------------------------------------------------------");
                break;
            }
            else if (sum>x)
            {
                break;
            }

        }
    }
    printf("\n\n**********************************************************************************************************************\n");
}

int main()
{
while (1)
{
    findsequence();
}

    return 0;
}
