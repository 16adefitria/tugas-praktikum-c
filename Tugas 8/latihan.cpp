#include <stdio.h>

int main() {
    // Mendefinisikan array satu dimensi
    int A[11];

    // Data dari dokumen
    int dataDokumen[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};

    // Inisialisasi variabel
    int i = 0, indexA = 0;

    // a. Menyimpan nilai secara berurutan
    while (dataDokumen[i] != 999 && indexA < 11) {
        A[indexA] = dataDokumen[i];
        indexA++;
        i++;
    }

    // Mencetak hasil a
    printf("a. A ");
    for (int j = 0; j < indexA; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    // b. Menyimpan nilai secara terbalik
    i = 0; indexA = 0;
    while (dataDokumen[i] != 999 && indexA < 11) {
        A[indexA] = dataDokumen[i];
        indexA++;
        i++;
    }

    // Mencetak hasil b
    printf("b. A ");
    for (int j = indexA - 1; j >= 0; j--) {
        printf("%d ", A[j]);
    }
    printf("\n");

    return 0;
}