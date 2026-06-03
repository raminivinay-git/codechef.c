#include <stdio.h>

int main() {
    int x, y, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & x, & y);
        int choco = 2 * x;
        int candy = 5 * y;
        if (choco > candy) {
            printf("CHOCOLATE\n");
        }
        else if (choco < candy) {
            printf("CANDY\n");
        }
        else {
            printf("EITHER\n");
        }
    }
    return 0;
}
