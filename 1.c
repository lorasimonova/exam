#include <stdio.h>

int isPalindrom(int num) {
    int isxodnoe = num;
    int obratnoe = 0;
    

    while (num > 0) {
        int ostatok = num % 10;
        obratnoe = obratnoe * 10 + ostatok;
        num /= 10;
    }

    if (isxodnoe == obratnoe) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    scanf("%d", &num);

    if (isPalindrom(num)) {
        printf("число является палиндромом \n");
    } else {
        printf("число не является палиндромом \n");
    }

    return 0;
}
