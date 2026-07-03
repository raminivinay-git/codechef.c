#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, m;
        scanf("%d %d", & n, & m);
        char a[n + 1], b[m + 1];
        scanf("%s %s", a, b);
        int i = 0;
        while (i < n && i < m && a[i] == b[i]) {
            printf("%c", a[i]);
            i++;
        }
        printf("\n");
    }
    return 0;
}
