#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int X, P, Q;
        scanf("%d %d %d", &X, &P, &Q);

        int fine = (P - Q) * X;
        printf("%d\n", fine);
    }

    return 0;
}
