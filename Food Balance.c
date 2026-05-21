#include <stdio.h>

int main() {
    int f1, f2, p1, p2;
    int both, first, second;
    scanf("%d %d", & f1, & p1);
    scanf("%d %d", & f2, & p2);
    first = abs(f1 - p1);
    second = abs(f2 - p2);
    if (first == second) {
        printf("both");
    }
    else if (first > second) {
        printf("second");
    }
    else {
        printf("first");
    }
    return 0;
}
