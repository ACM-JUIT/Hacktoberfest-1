#include <stdio.h>
int main() {
        int n, rev= 0, rem, no;
    
        scanf("%d", &n);
        no = n;

        while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

        if (no == rev)
        printf("YES");
        else
        printf("NO");

    return 0;
}
