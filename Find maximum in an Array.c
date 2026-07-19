#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, tall;
        scanf("%d", & n);
        int arr[n];
        tall = arr[0];
        for (int i = 0; i < n; i++) {
            scanf("%d", & arr[i]);
            if (tall < arr[i]) {
                tall = arr[i];
            }
        }
        printf("%d\n", tall);
    }
    return 0;
}
