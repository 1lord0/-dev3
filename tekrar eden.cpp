#include <stdio.h>

void tekrarEdenleriBul(const int dizi[], int boyut) {
    int i, j;

    printf("Tekrar eden elemanlar: ");

    for (i = 0; i < boyut; i++) {
        for (j = i + 1; j < boyut; j++) {
            if (dizi[i] == dizi[j]) {
                printf("%d ", dizi[i]);
                break;
            }
        }
    }

    printf("\n");
}

int main() {
    int boyut, i;

    printf("Dizinin boyutunu girin: ");
    scanf("%d", &boyut);

    int dizi[boyut];

    printf("Elemanlari girin:\n");
    for (i = 0; i < boyut; i++) {
        scanf("%d", &dizi[i]);
    }

    tekrarEdenleriBul(dizi, boyut);

    return 0;
}

