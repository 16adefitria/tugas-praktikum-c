#include <stdio.h>

int main(){
	//mencetak deret angka 100, 95, 90, ...., 55
	for (int i = 100; i >= 55; i -= 5){
		printf("%d ", i);
	}
	return 0;
}