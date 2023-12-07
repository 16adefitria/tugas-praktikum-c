#include <stdio.h>

int main() {
    int X[4] = {12, 2, 7, 10};
    int Y[6] = {15, 4, 16, 20, 25, 30};
    int Z[10];
    int i, j, k;

    // Menggabungkan nilai yang lebih kecil dari 10 dari array X ke dalam array Z
    k = 0;
    for (i = 0; i < 4; i++) {
        if (X[i] < 10) {
            Z[k] = X[i];
            k++;
        }
    }

    // Menggabungkan nilai yang ada di lokasi ganjil dari array Y ke dalam array Z
    for (j = 1; j < 6; j += 2) {
        Z[k] = Y[j];
        k++;
    }

    // Menampilkan isi array Z
    printf("Isi array Z:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", Z[i]);
    }

    return 0;
}
