#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if (x >= 7)
        printf("3\n");
    else if (x >= 3)
        printf("2\n");
    else if (x >= 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
