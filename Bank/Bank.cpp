#include <iostream>
#include <stdio.h>
using namespace std;

int total_uang = 0;

int main() {
	int pilihan, menabung_uang, mengambil_uang;
	printf("====================Bank==================\n");
	printf("Total uang : %d\n", total_uang);
	printf("Pilihan :\n");
	printf("1 = Menabung\n");
	printf("2 = Mengambil Uang\n\n");
	printf("Pilihan : \n");
	scanf("%d", &pilihan);
	if (pilihan == 1) {
		printf("\nMasukkan uang : \n");
		scanf("%d", &menabung_uang);
		total_uang += menabung_uang;
		printf("\n\n");
	} else if (pilihan == 2) {
		printf("\nMasukkan uang yang akan diambil : \n");
		scanf("%d", &mengambil_uang);
		total_uang -= mengambil_uang;
		printf("\n\n");
	} else {
		printf("Pilihan tidak ada di daftar\n\n");
	}	
	return main();
}