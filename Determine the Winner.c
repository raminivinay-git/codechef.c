#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
  
    while (t--) {
        int pa, pb, qa, qb;
        scanf("%d %d %d %d", & pa, & pb, & qa, & qb);
      
        int A = (pa > pb) ? pa : pb;
        int B = (qa > qb) ? qa : qb;

        if (A > B) {
            printf("Q\n");
        }
        else if (A < B) {
            printf("P\n");
        }
        else if (A == B) {
            printf("TIE\n");
        }
    }
    return 0;
}
