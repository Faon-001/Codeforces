#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char word[100];
        char NewWord[100];
        int count = 0;
        char a, b;

        scanf("%s", word);

        if (strlen(word) <= 10)
        {
            printf("%s\n", word);
        }
        else
        {

            count = strlen(word);

            NewWord[0] = word[0];
            NewWord[1] = '\0';

            sprintf(NewWord + strlen(NewWord), "%d", count - 2);

            b = word[count - 1];
            strncat(NewWord, &b, 1);

            printf("%s\n", NewWord);
        }
    }

    return 0;
}
