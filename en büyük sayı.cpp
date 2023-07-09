#include <stdio.h>

int main() {
    int n, i;
    int max;

    printf("Kac adet sayi gireceksiniz: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Gecersiz sayi!\n");
        return 0;
    }

    printf("Sayilari girin:\n");
    scanf("%d", &max);

    for (i = 1; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("En buyuk sayi: %d\n", max);

    return 0;
}

