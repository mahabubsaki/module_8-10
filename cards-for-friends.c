#include <stdio.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++)
    {
        long long int height, width, friends, papers = 1;
        scanf("%lld %lld %lld", &width, &height, &friends);
        while (width % 2 == 0 || height % 2 == 0)
        {
            if (width % 2 == 0)
            {
                width = width / 2;
                papers = papers * 2;
            }
            if (height % 2 == 0)
            {
                height = height / 2;
                papers = papers * 2;
            }
        }
        if (papers >= friends)
        {
            printf("YES");
        }
        else
        {
            printf("No");
        }
        printf("\n");
    }
}