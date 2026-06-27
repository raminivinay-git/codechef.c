#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        n = n * 50;
        int sugarcane = (n * 20) / 100;
        int salt = (n * 20) / 100;
        int rent = (n * 30) / 100;
        printf("%d\n", n - (sugarcane + salt + rent));
    }
    return 0;
}
