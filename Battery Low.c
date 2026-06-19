#include <stdio.h>

int main(void) {
    int t, i;
    scanf("%d", & t);
    for (i = 0; i < t; i++)
    {
        int x;
        scanf("%d", & x);
        if (x <= 15)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;

}
