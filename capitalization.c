#include <stdio.h>

int main()
{
    char words[1001];
    scanf("%s", words);
    if (words[0] >= 'a' && words[0] <= 'z')
    {
        words[0] = words[0] - 32;
    }
    printf("%s", words);
}