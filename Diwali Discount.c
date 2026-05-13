#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", & a, & b);
    if (a > b) {
        a = a - b;
        printf("%d", a);
    }
    else {
        printf("0");
    }
    return 0;
}
