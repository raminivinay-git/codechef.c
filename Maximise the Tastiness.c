#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", & a, & b, & c, & d);

        int first = (a > b) ? a : b;
        int second = (c > d) ? c : d;

        printf("%d\n", first + second);
    }

    return 0;
}
