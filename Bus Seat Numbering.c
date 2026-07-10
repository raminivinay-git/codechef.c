#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        if (n >= 1 && n <= 15) {
            if (n >= 1 && n <= 10) {
                printf("Lower Double\n");
            }
            else if (n >= 11 && n <= 15) {
                printf("Lower Single\n");
            }
        }
        else if (n >= 16 && n <= 30) {
            if (n >= 16 && n <= 25) {
                printf("Upper Double\n");
            }
            else if (n >= 26 && n <= 30) {
                printf("Upper Single\n");
            }
        }
    }
    return 0;
}
