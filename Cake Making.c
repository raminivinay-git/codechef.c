#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", & a, & b);
    if (a == 1 && b == 1) {
        printf("0\n");
    }
    else {
        int mini = (a < b) ? a : b;
        printf("%d\n", (a * b) - mini);
    }
    return 0;
}
