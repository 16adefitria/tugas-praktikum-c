#include <stdio.h>

int main() {
    // Inisialisasi array A
    char A[8] = {'A', 'J', 'A', 'K', 'A', 'R', 'T', 'A'};

    // Memeriksa isi array A untuk huruf yang sama
    int adaHurufSama = 0;
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (A[i] == A[j]) {
                adaHurufSama = 1;
                printf("ADA\n");
                printf("Huruf yang sama: %c\n", A[i]);
                break;
            }
        }
        if (adaHurufSama) {
            break;
        }
    }

    if (!adaHurufSama) {
        printf("TIDAK ADA\n");
    }

    return 0;
}
