#include <stdio.h>

int main() {
    char A[11] = "STTMANDALA";
    char C;
    int count = 0;

    printf("Masukan Karakter = ");
    scanf(" %c", &C);
    getchar(); // Membersihkan buffer

    for (int i = 0; i < 10; ++i) {
        if (A[i] == C) {
            count++;
        }
    }

    if (count > 0) {
        printf("%d\n", count);
        printf("ADA\n");
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
