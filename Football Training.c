#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", & x, & y);
    if (x > y) {
        printf("FREEKICK\n");
    }
    else {
        printf("PENALTY\n");
    }
    return 0;
}
