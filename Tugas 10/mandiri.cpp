#include <stdio.h>

int main() {
    int A[5] = {12, 8, 17, 5, 15};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12];
    int i, j, k;

    // Menyalin nilai yang lebih besar dari 10 dari array A ke dalam array C
    k = 0;
    for (i = 0; i < 5; i++) {
        if (A[i] > 10) {
            C[k] = A[i];
            k++;
        }
    }

    // Menyalin nilai yang lebih besar dari 10 dari array B ke dalam array C
    for (j = 0; j < 7; j++) {
        if (B[j] > 10) {
            C[k] = B[j];
            k++;
        }
    }

    // Menampilkan isi array C
    printf("Isi array C (a):\n");
    for (i = 0; i < k; i++) {
        printf("%d ", C[i]);
    }

    // Mengatur ulang nilai array C
    k = 0;
    for (i = 0; i < 5; i++) {
        if (A[i] > 10) {
            C[k] = A[i];
            k++;
        }
    }
    for (j = 0; j < 7; j++) {
        if (B[j] > 10) {
            C[k] = B[j];
            k++;
        }
    }

    // Menampilkan isi array C (b)
    printf("\nIsi array C (b):\n");
    for (i = 0; i < k; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
