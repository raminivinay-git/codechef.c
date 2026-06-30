#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        int count = 0;
        scanf("%d", & n);
        for (int i = 1; i <= n; i++) {
            int a;
            scanf("%d", & a);
            count = count + (a * i);
        }
        printf("%d\n", count);
    }
    return 0;
}
