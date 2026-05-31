#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", & x, & y);
    x = x - y;
    if (x >= 18) {
        printf("RCB\n");
    }
    else {
        printf("CSK\n");
    }
    return 0;
}
