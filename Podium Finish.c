#include <stdio.h>

int main() {
    int a, b, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & a, & b);
        int TIMEGAP = a + b;
        printf("%d\n", TIMEGAP);
    }
    return 0;
}
