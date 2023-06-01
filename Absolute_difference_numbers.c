#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, f, b, c, d = 0, v, m, a, e, z;
    scanf("%d%d", &n, &x);
    c = 1;
    for (int i = 0; i < x; i++) {
        c *= 10;
    }
    b = n % c;
    m = n;

    while (n != 0) {
        v = n % 10;
        d++;
        n = n / 10;
    }

    a = d - x;
    e = 1;
    for (int i = 0; i < a; i++) {
        e *= 10;
    }
    f = m / e;

    z = abs(b - f);
    printf("%d
", z);

    return 0;
}
