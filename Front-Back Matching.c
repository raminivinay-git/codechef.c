#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int n;
        scanf("%d", & n);

        char s[n + 1];
        scanf("%s", s);

        int freq[26] = {
            0
        };

        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }

        int found = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] >= 2) {
                found = 1;
                break;
            }
        }

        if (found)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
