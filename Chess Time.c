#include <stdio.h>

int main() {
    int n, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d", & n);
        int N = n * 60;
        int max = N / 20;
        printf("%d\n", max);
    }
    return 0;

}
