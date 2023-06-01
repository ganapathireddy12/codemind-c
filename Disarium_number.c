#include <stdio.h>

int main() {
    int n, sum = 0, p, c = 0, k = 0, r, m = 0, v, q;
    scanf("%d", &n);
    v = n;

    while (n != 0) {
        q = n % 10;
        k = k * 10 + q;
        n = n / 10;
    }

    while (k != 0) {
        r = k % 10;
        c++;
        if (r != 0) {
            m++;
        }

        p = 1;
        for (int i = 0; i < m; i++) {
            p *= r;
        }

        sum = sum + p;
        k = k / 10;
    }

    if (sum == v) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
