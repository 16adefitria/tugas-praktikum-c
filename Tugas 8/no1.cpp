#include <stdio.h>

int main() {
    // Mendefinisikan array satu dimensi
    int A[11];
    
    // Data dari dokumen
    int dataDokumen[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    
    // Inisialisasi variabel
    int i = 0, indexA = 0;

    // a. Menyimpan nilai genap yang lebih besar dari 9
    while (dataDokumen[i] != 999 && indexA < 11) {
        if (dataDokumen[i] > 9 && dataDokumen[i] % 2 == 0) {
            A[indexA] = dataDokumen[i];
            indexA++;
        }
        i++;
    }

    // Mencetak hasil a
    printf("a. A ");
    for (int j = 0; j < indexA; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    // b. Menyimpan nilai lebih besar dari 9 (tanpa menyisipkan nilai yang tidak memenuhi syarat)
    i = 0; indexA = 0;
    while (dataDokumen[i] != 999 && indexA < 11) {
        if (dataDokumen[i] > 9) {
            A[indexA] = dataDokumen[i];
            indexA++;
        }
        i++;
    }

    // Mencetak hasil b
    printf("b. A ");
    for (int j = 0; j < indexA; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    // c. Menyimpan nilai lebih besar dari 9 secara berderet
    i = 0; indexA = 0;
    while (dataDokumen[i] != 999 && indexA < 11) {
        if (dataDokumen[i] > 9) {
            A[indexA] = dataDokumen[i];
            indexA++;
        }
        i++;
    }

    // Mencetak hasil c
    printf("c. A ");
    for (int j = 0; j < indexA; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    // d. Menyimpan nilai ganjil
    i = 0; indexA = 0;
    while (dataDokumen[i] != 999 && indexA < 11) {
        if (dataDokumen[i] % 2 != 0) {
            A[indexA] = dataDokumen[i];
            indexA++;
        }
        i++;
    }

    // Mencetak hasil d
    printf("d. A ");
    for (int j = 0; j < indexA; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    // e. Menyimpan nilai ganjil tanpa nilai 999
    i = 0; indexA = 0;
    while (dataDokumen[i] != 999 && indexA < 11) {
        if (dataDokumen[i] % 2 != 0) {
            A[indexA] = dataDokumen[i];
            indexA++;
        }
        i++;
    }

    // Mencetak hasil e
    printf("e. ");
    for (int j = 0; j < indexA; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    return 0;
}