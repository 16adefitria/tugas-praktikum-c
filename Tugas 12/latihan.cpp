#include <stdio.h>
#include <string.h>

int main() {
    // Inisialisasi array A dan B
    char A[6], B[8];

    // Menginput isi array A
    printf("Masukkan isi array A (tanpa spasi): ");
    scanf("%s", A);

    // Menginput isi array B
    printf("Masukkan isi array B (tanpa spasi): ");
    scanf("%s", B);

    // Menggunakan fungsi strcmp untuk membandingkan string
    int result = strcmp(A, B);

    // Memeriksa apakah ada yang sama di antara isi array A dan B
    if (result == 0) {
        printf("ADA\n");
        printf("Huruf yang sama: %s\n", A);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
