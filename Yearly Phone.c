#include <stdio.h>

int main() {

    int x;
    scanf("%d", & x);
    x = x % 100;
    printf("K%02d", x);

    return 0;
}
