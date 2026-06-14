#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x;
        scanf("%d", & x);
        if (x > 20) {
            x = x - 20;
            printf("%d\n", 200 + (x / 2) * 5);
        }
        else {
            printf("%d\n", x * 10);
        }
    }
    return 0;
}
