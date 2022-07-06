#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_BUFFER 101
#define WORD_LETTERS 11

int main(int argc, char* argv[])
{

    char filePath[] = "C:\\Users\\mahmo\\Desktop\\uno\\file.txt";

    char sentence[LINE_BUFFER];

    int wordCounter = 1;
    int lineNumber = 1;
    int charachterCounter = 0;
    FILE* pFileHolder;
    pFileHolder = fopen(filePath, "r");

    if (pFileHolder == NULL)
    {
        printf("\n\t Error ! No such a file exists!");
        exit(1);
    }

    while (!feof(pFileHolder))

    {
        fgets(sentence,LINE_BUFFER,pFileHolder);

               if (strstr(sentence, argv[1]) != NULL )
               {
                    printf("\n Found on line :%d", lineNumber);

                    printf("\t in sentence: %s",sentence);

                    for ( int i = 0; i<LINE_BUFFER; i++)
                    {
                            if ( sentence[i] == ' ' && sentence[i+1] != ' ')
                               wordCounter ++;

                            if (sentence[i] == '\n')
                                wordCounter = 1;

                            if (argv[1][0] == sentence[i])

                                for (int j =0; j <strlen(argv[1]); j++)
                            {
                                if (argv[1][j] == sentence[i+j])
                                    charachterCounter ++;

                                if (charachterCounter == strlen(argv[1]))
                                {
                                    printf("\b\b\t word position is: %d \n", wordCounter );
                                    charachterCounter = 0;
                                }

                            }

                    }

               }
                lineNumber ++;
    }

    if (argc > 1)
    {
       pFileHolder = fopen(filePath,"a");

       fputs("\n\n\n\n\n\n\n\n\n\n\t\t C compiler has been there :)", pFileHolder);
    }

    fclose(pFileHolder);
}
