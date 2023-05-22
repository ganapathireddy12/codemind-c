#include <stdio.h>

int pri(int x) {
    int i, c = 0;
    if (x == 1) {
        return 0;
    } else {
        for (i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                c = 1;
                break;
            }
        }
    }
    if (c == 1) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int l, u, j, d = 0;
    scanf("%d%d", &l, &u);
    for (j = l; j <= u; j++) {
        if (pri(j)) {
            d++;
        }
    }
    printf("%d", d);
    
    return 0;
}
