#include <stdio.h>

int main() {
    int a, b, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & a, & b);
        if (a > b) {
            printf("%d\n", 7 - a);
        }
        else {
            printf("%d\n", 7 - b);
        }
    }
    return 0;
}
