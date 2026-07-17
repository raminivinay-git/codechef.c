#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, flag = 0;
        scanf("%d", & n);
        int s[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", & s[i]);
            if (s[i] > 4) {
                flag++;
            }
        }
        if (flag == n) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
