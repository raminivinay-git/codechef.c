#include <stdio.h>

int main() {
    int a, b, c, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d %d", & a, & b, & c);
        if (a >= 10 && b >= 10 && c >= 10 && (a + b + c) >= 100) {
            printf("PASS\n");
        }
        else {
            printf("FAIL\n");
        }
    }
    return 0;
}
