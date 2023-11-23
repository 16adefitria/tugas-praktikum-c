#include <stdio.h>

int main(){
	// kecepatan sepeda dalam meret per detik
	int kecepatan = 2;
	
	//waktu dalam detik
	int waktu = 100;
	
	//menghitung jarak yang ditempuh
	int jarak = kecepatan * waktu;
	
	//mencetak hasil
	printf("Setelah bersepeda selama %d detik dengan kecepatan  %d m/detik, \n", waktu, kecepatan);
	printf("Jarak yang ditempuh adalah %d meter.\n", jarak);
	
	return 0;
}