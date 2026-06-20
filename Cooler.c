#include <stdio.h>

int main()
{
    int t, n, m;

    scanf("%d", & t);

    while (t--)
    {
        scanf("%d %d", & n, & m);

        int sum = 0;

        for (int i = n; i > m; i--)
        {
            sum += i;
        }

        printf("%d\n", sum);
    }

    return 0;
}
