#include <stdio.h>

float sumFoo(int n) {
    float sum = 0;

    if (n >= 1) {
        sum = 1;

        for (int i = 2; i <= n; i++) {
            sum += 1.0 / (i * (i + 1));
        }
    }

    return sum;
}

int main() {
    int n;

    printf("n = ");
    scanf("%d", &n);

    float result = sumFoo(n);
    printf("ответ: %.1f\n", result);

    return 0;
}
