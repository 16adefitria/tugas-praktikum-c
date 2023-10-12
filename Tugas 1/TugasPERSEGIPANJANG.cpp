#include <stdio.h>

int main()
{
	int panjang, lebar, keliling, luas;

    //Input Variabel
    printf("Program Menghitung Keliling dan Luas Persegi Panjang\n\n");
    printf("Input Panjang\t: ");
    scanf("%d", &panjang);
    printf("Input Lebar  \t: ");
    scanf("%d", &lebar);
    
    //Menghitung Luas
    luas = panjang * lebar;
    printf("Luas \t\t: %d\n", luas);
    return 0;
}
    