#include <stdio.h>

int main(){
	//saldo awal uang
	double saldo = 1000000.0;
	
	//bunga per bulan (dalam desimal)
	double bunga = 0.02;
	
	//jumlah bulan
	int jumlahbulan = 10;
	
	//menghitung saldo setelah sejumlah bulan
	for (int bulan = 1; bulan <= jumlahbulan; bulan++) {
		//menghitung bunga bulan ini
		double bungaBulanIni = saldo * bunga;
		
		//menambah bunga ke saldo
		saldo += bungaBulanIni;
	}
	
	//mencetak hasil
	printf("Setelah %d bulan, jumlah uangnya adalah Rp. %.2f\n", jumlahbulan, saldo);
	
	return 0;
}