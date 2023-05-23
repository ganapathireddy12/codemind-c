#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int isStrong(int num) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return (sum == originalNum);
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        if (isStrong(N)) {
            printf("Strong
");
        } else {
            printf("Not Strong
");
        }
    }
    
    return 0;
}
