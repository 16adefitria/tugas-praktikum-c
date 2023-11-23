#include <stdio.h>

int main(){
	int nilaiMahasiswa[10];
	
	for (int i = 0; i < 10; i++){
		printf("Masukan nilai mahasiswa ke-%d: ", i + 1);
		scanf("%d", &nilaiMahasiswa[i]);
	}
	
	printf("\nDaftar nilai mahasiswa yang lulus: \n");
	for (int i = 0; i < 10; i++){
		if (nilaiMahasiswa[i] >= 60) {
			printf("Mahasiswa ke-%d: %d\n", i + 1, nilaiMahasiswa[i]);
		}
	}
	
	return 0;
}