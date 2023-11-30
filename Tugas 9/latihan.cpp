#include <stdio.h>

int main (){
	int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
	int N, count = 0;
	
	printf("Masukan Bilangan Integer = ");
	scanf("%d", &N);
	
	for (int i = 0; i < 11; ++i) {
		if (A[i] == N ) {
			printf("ADA\n");
			count++;
		}
	}
	if (count > 0) {
		printf("Terdapat %d bilangan yang sama\n", count);
	} else {
		printf("TIDAK ADA\n");
	}
	
	return 0;
}