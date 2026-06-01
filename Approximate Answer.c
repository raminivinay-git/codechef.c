#include <stdio.h>

int main() {
    int x, y, k;
    scanf("%d %d %d", & x, & y, & k);
    int answer = abs(abs(x) - abs(y));
    if (answer <= k) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
