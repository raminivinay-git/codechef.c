#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int a, b, i, prime = 1;
        scanf("%d %d", & a, & b);
        int total = a + b;
        if (total <= 1) {
            prime = 0;
        }
        else {
            for (i = 2; i * i <= total; i++) {
                if (total % i == 0) {
                    prime = 0;
                    break;
                }
            }
        }
        if (prime) {
            printf("ALICE\n");
        }
        else {
            printf("BOB\n");
        }
    }
    return 0;
}
