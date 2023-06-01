#include <stdio.h>

int main() {
    int n, p, s;
    scanf("%d", &n);
    p = 0;
    
    while (p * p <= n) {
        p++;
    }
    
    p--;
    s = p * p;
    
    if (s == n) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
