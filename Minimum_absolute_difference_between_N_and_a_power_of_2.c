#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, b, a, m, i;
    scanf("%d", &n);
    m = 1;

    for (i = 1;; i++) {
        m *= 2;
        if (m > n) {
            a = m - n;
            break;
        }
    }

    m /= 2;
    b = n - m;

    if (a < b) {
        printf("%d", a);
    } else {
        printf("%d", b);
    }

    return 0;
}
