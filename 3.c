#include <stdio.h>

int main() {
    int num, count = 0;
    float sum = 0;

    while (1) {
        scanf("%d", &num);
        if (num == 0)
            break;

        if (num % 10 == 3) {
            sum += num;
            count++;
        }
    }

    if (count != 0)
        printf("%.1lf\n", sum / count);
    else
        printf("0.0\n");

    return 0;
}
