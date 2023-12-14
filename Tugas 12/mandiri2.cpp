#include <stdio.h>

int main() {
    // Inisialisasi array A
    char A[11] = {'A', 'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', 'A'};

    // Menghitung jumlah kemunculan setiap huruf dalam array A
    int count[26] = {0};
    int maxCount = 0;
    char hurufTerbanyak;

    for (int i = 0; i < 11; i++) {
        int index = A[i] - 'A';
        count[index]++;
        if (count[index] > maxCount) {
            maxCount = count[index];
            hurufTerbanyak = A[i];
        }
    }

    // Menampilkan hasil
    printf("Huruf yang terbanyak: %c\n", hurufTerbanyak);
    printf("Jumlah huruf terbanyak: %d\n", maxCount);

    return 0;
}
