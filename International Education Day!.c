#include <stdio.h>

int main() {
    int a, b, c, A, B;
    scanf("%d %d %d", & a, & b, & c);
    A = a * c;
    B = b * c;
    if (A >= B) {
        printf("%d", A);
    }
    else {
        printf("%d", B);
    }
    return 0;
}
