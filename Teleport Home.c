#include <stdio.h>

int main() {
    int d, t;
    scanf("%d %d", & d, & t);
    if (d < t) {
        printf("0\n");
    }
    else {
        printf("%d\n", d - t);
    }
    return 0;
}
