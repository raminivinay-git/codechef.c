#include <stdio.h>

int main() {
    int x, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d", & x);
        x = x * 60;
        int sec = x - 5;
        printf("%d\n", (sec / 30) + 1);
    }
    return 0;
}
