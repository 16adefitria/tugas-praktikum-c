#include <stdio.h>

int main (){
	int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
	int N;
	
	printf("Masukan Bilangan Integer = ");
	scanf("%d", &N);
	
	int found = 0;
	
	printf("\n");
	
	for (int i = 0; i < 11; ++i) {
		if (A[i] == N ) {
			printf("ADA\n");
			printf("Lokasi bilangan yang sama: %d", i);
			found = 1;
		}
	}
	if (!found) {
		printf("TIDAK ADA\n");
	}
	
	return 0;
}