#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        char s[100];
        int a = 0, b = 0, n;
        scanf("%d", & n);
        scanf("%s", s);
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') {
                a++;
            }
            else {
                b++;
            }
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}
