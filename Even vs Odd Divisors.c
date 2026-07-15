#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int n;
        scanf("%d", & n);

        int count = 0;

        while (n % 2 == 0) {
            count++;
            n /= 2;
        }

        if (count == 0)
            printf("-1\n");
        else if (count == 1)
            printf("0\n");
        else
            printf("1\n");
    }

    return 0;
}
