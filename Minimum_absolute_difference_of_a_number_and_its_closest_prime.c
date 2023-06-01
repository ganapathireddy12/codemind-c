#include<stdio.h>

int prime(int x) {
    int i, c = 0, mm = 0;
    for (i = 1; i <= x; i++) {
        if (x % i == 0) {
            c = c + 1;
        }
    }
    if (c == 2) {
        return 1;
    } else {
        return 0;
    }
}

int absolute(int x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}

int main() {
    int n, i, res, d1 = 0, d2 = 0, np = 0, ap, aa, bb = 0, cc, m = 0;
    scanf("%d", &n);
    
    for (cc = 1; cc <= n; cc++) {
        if (n % cc == 0) {
            bb++;
        }
    }
    
    if (bb == 2) {
        m = 1;
    }
    
    if (m == 0) {
        for (i = n - 1;; i--) {
            if (prime(i)) {
                np = i;
                break;
            }
        }
        
        for (i = n + 1;; i++) {
            if (prime(i)) {
                ap = i;
                break;
            }
        }
        
        d1 = n - np;
        d2 = ap - n;
        
        if (d1 < d2) {
            aa = absolute(n - np);
            printf("%d", aa);
        } else {
            aa = absolute(n - ap);
            printf("%d", aa);
        }
    } else {
        printf("0");
    }
    
    return 0;
}
