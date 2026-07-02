#include <stdio.h>

#include <stdlib.h>

int main() {

    int x, y;
    scanf("%d %d", & x, & y);
    int diff = abs(x - y);
    if (diff <= 2) {
        printf("Interesting\n");
    }
    else {
        printf("Boring\n");
    }

    return 0;
}
