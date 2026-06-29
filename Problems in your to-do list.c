#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        int count = 0;
        scanf("%d", & n);
        while (n--) {
            int diff;
            scanf("%d", & diff);
            if (diff >= 1000) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
