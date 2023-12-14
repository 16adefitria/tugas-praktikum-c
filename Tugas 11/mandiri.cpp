#include <stdio.h>

int main() {
    // Inisialisasi array A
    int A[] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int n = sizeof(A) / sizeof(A[0]);

    // Menghitung rata-rata nilai mahasiswa dari array A
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += A[i];
    }
    float rataRata = (float)total / n;

    // Inisialisasi array B dan C
    int B[12], C[12];
    int jumlahB = 0, jumlahC = 0;

    // Memindahkan nilai ke array B dan C berdasarkan rata-rata
    for (int i = 0; i < n; i++) {
        if (A[i] > rataRata) {
            B[jumlahB] = A[i];
            jumlahB++;
        } else {
            C[jumlahC] = A[i];
            jumlahC++;
        }
    }

    // Menampilkan isi array A
    printf("Array A: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Menampilkan isi array B
    printf("Array B: ");
    for (int i = 0; i < jumlahB; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    // Menampilkan isi array C
    printf("Array C: ");
    for (int i = 0; i < jumlahC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
