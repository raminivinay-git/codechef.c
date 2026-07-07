#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, odd = 0, even = 0;
        scanf("%d", & n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", & arr[i]);
          
            if ((i + 1) % 2 == 0) {
                even = even + arr[i];
            }
            else {
                odd = odd + arr[i];
            }
        }
        if (odd > even) {
            printf("%d\n", odd);
        }
        else {
            printf("%d\n", even);
        }
    }
    return 0;
}
