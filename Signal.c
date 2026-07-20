#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int n;
        scanf("%d", & n);

        char s[n + 1];
        scanf("%s", s);

        int seenZero = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                seenZero = 1;
            } else if (s[i] == '1' && seenZero) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
