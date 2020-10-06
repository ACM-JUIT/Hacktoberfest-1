#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, NEXT_TERM;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        NEXT_TERM = t1 + t2;
        t1 = t2;
        t2 = NEXT_TERM;
    }

    return 0;
}
