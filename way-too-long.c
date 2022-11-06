#include <stdio.h>
#include <string.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    for (int x = 0; x < testcase; x++)
    {
        char words[105];
        scanf("%s", words);
        int length = strlen(words);
        if (length > 10)
        {
            printf("%c%d%c", words[0], length - 2, words[length - 1]);
        }
        else
        {
            printf("%s", words);
        }
        printf("\n");
    }
}