#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        char s[n + 1];
        scanf("%s", s);
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                printf("T");
            }
            if (s[i] == 'T') {
                printf("A");
            }
            if (s[i] == 'C') {
                printf("G");
            }
            if (s[i] == 'G') {
                printf("C");
            }
        }
        printf("\n");
    }
    return 0;
}
