#include <stdio.h>

int main() {
    int a, b, x, y;
    scanf("%d %d %d %d", & a, & b, & x, & y);
    int A = (2 * a) + b;
    int B = (2 * x) + y;
    if (A > B) {
        printf("MESSI\n");
    }
    else if (A < B) {
        printf("RONALDO\n");
    }
    else {
        printf("EQUAL\n");
    }
    return 0;
}
