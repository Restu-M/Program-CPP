#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
using namespace std;

int main() {
	system("color 02");
	int pilihan, pilihan2, pilihan3;
	float jarak, kecepatan, waktu;
	printf("================By I Made Restu Manujaya================\n");
	printf("Pilihan :\n1 = Jarak\n2 = Kecepatan\n3 = Waktu\n4 = Keluar\n\n");
	printf("Masukkan Pilihan : ");	  
	scanf("%d", &pilihan);
	if (pilihan == 1) {
		printf("\nPilihan :\n1 = Kecepatan (Km/Jam)\n2 = Kecepatan (Meter/Menit)\n\n");
		printf("Masukkan Pilihan : ");
		scanf("%d", &pilihan2);
		if (pilihan2 == 1) {
			printf("Masukkan Kecepatan (Km/Jam) : ");
			scanf("%f", &kecepatan);
			printf("\nPilihan :\n1 = Waktu (Jam)\n2 = Waktu (Menit)\n\n");
			printf("Masukkan Pilihan : ");
			scanf("%d", &pilihan3);
			if (pilihan3 == 1) {
				printf("Masukkan Waktu (Jam) : ");
				scanf("%f", &waktu);
				jarak = kecepatan * waktu;
				printf("Jarak = %.2f Km\n\n\n", jarak);
			}
			else if (pilihan3 == 2) {
				printf("Masukkan Waktu (Menit) : ");
				scanf("%f", &waktu);
				jarak = kecepatan * (waktu/60);
				printf("Jarak = %.2f Km\n\n\n", jarak);
			}
			else {
				printf("Pilihan tidak ada di daftar\n\n");
			}
		}
		else if (pilihan2 == 2) {
			printf("Masukkan Kecepatan (Meter/Menit) : ");
			scanf("%f", &kecepatan);
			printf("\nPilihan :\n1 = Waktu (Jam)\n2 = Waktu (Menit)\n\n");
			printf("Masukkan Pilihan : ");
			scanf("%d", &pilihan3);
			if (pilihan3 == 1) {
				printf("Masukkan Waktu (Jam) : ");
				scanf("%f", &waktu);
				jarak = (kecepatan * (waktu * 60)) / 1000;
				printf("Jarak = %.2f Km\n\n\n", jarak);
			}
			else if (pilihan3 == 2) {
				printf("Masukkan Waktu (Menit) : ");
				scanf("%f", &waktu);
				jarak = (kecepatan * waktu) / 1000;
				printf("Jarak = %.2f Km\n\n\n", jarak);
			}
			else {
				printf("Pilihan tidak ada di daftar\n\n\n");
			}
		}
		else {
			printf("Pilihan tidak ada di daftar\n\n\n");
		}
	}
	else if (pilihan == 2) {
		printf("\nPilihan :\n1 = Jarak (Km)\n2 = Jarak (Meter)\n\n");
		printf("Masukkan Pilihan : ");
		scanf("%d", &pilihan2);
		if (pilihan2 == 1) {
			printf("Masukkan Jarak (Km) : ");
			scanf("%f", &jarak);
			printf("\nPilihan :\n1 = Waktu (Jam)\n2 = Waktu (Menit)\n\n");
			printf("Masukkan Pilihan : ");
			scanf("%d", &pilihan3);
			if (pilihan3 == 1) {
				printf("Masukkan Waktu (Jam) : ");
				scanf("%f", &waktu);
				jarak = jarak / waktu;
				printf("Kecepatan = %.2f Km/Jam\n\n\n", jarak);
			}
			else if (pilihan3 == 2) {
				printf("Masukkan Waktu (Menit) : ");
				scanf("%f", &waktu);
				jarak = jarak / (waktu/60);
				printf("Kecepatan = %.2f Km/Jam\n\n\n", jarak);
			}
			else {
				printf("Pilihan tidak ada di daftar\n\n");
			}
		}
		else if (pilihan2 == 2) {
			printf("Masukkan Jarak (Meter) : ");
			scanf("%f", &jarak);
			printf("\nPilihan :\n1 = Waktu (Jam)\n2 = Waktu (Menit)\n\n");
			printf("Masukkan Pilihan : ");
			scanf("%d", &pilihan3);
			if (pilihan3 == 1) {
				printf("Masukkan Waktu (Jam) : ");
				scanf("%f", &waktu);
				jarak = jarak / waktu;
				printf("Kecepatan = %.2f Meter/Jam\n\n\n", jarak);
			}
			else if (pilihan3 == 2) {
				printf("Masukkan Waktu (Menit) : ");
				scanf("%f", &waktu);
				jarak = jarak / waktu;
				printf("Kecepatan = %.2f Meter/Menit\n\n\n", jarak);
			}
			else {
				printf("Pilihan tidak ada di daftar\n\n");
			}
		}
		else {
			printf("Pilihan tidak ada di daftar\n\n\n");
		}
	}
	else if (pilihan == 3) {
		printf("\nPilihan :\n1 = Jarak (Km)\n2 = Jarak (Meter)\n\n");
		printf("Masukkan Pilihan : ");
		scanf("%d", &pilihan2);
		if (pilihan2 == 1) {
			printf("Masukkan Jarak (Km) : ");
			scanf("%f", &jarak);
			printf("\nPilihan :\n1 = Kecepatan (Km/Jam)\n2 = Kecepatan (Meter/Menit)\n\n");
			printf("Masukkan Pilihan : ");
			scanf("%d", &pilihan3);
			if (pilihan3 == 1) {
				printf("Masukkan Kecepatan (Km/Jam) : ");
				scanf("%f", &kecepatan);
				waktu = jarak / kecepatan;
				printf("Waktu = %.2f Jam\n\n\n", waktu);
			}
			else if (pilihan3 == 2) {
				printf("Masukkan Kecepatan (Meter/Menit) : ");
				scanf("%f", &kecepatan);
				waktu = (jarak * 1000) / kecepatan;
				printf("Waktu = %.2f Menit\n\n\n", waktu);
			}
			else {
				printf("Pilihan tidak ada di daftar\n\n");
			}
		}
		else if (pilihan2 == 2) {
			printf("Masukkan Jarak (Meter) : ");
			scanf("%f", &jarak);
			printf("\nPilihan :\n1 = Kecepatan (Km/Jam)\n2 = Kecepatan (Meter/Menit)\n\n");
			printf("Masukkan Pilihan : ");
			scanf("%d", &pilihan3);
			if (pilihan3 == 1) {
				printf("Masukkan Kecepatan (Km/Jam) : ");
				scanf("%f", &kecepatan);
				waktu = jarak / (kecepatan * 1000);
				printf("waktu = %.2f Jam\n\n\n", waktu);
			}
			else if (pilihan3 == 2) {
				printf("Masukkan Kecepatan (Meter/Menit) : ");
				scanf("%f", &kecepatan);
				waktu = jarak / kecepatan;
				printf("Waktu = %.2f Menit\n\n\n", waktu);
			}
			else {
				printf("Pilihan tidak ada di daftar\n\n");
			}
		}
		else {
			printf("Pilihan tidak ada di daftar\n\n\n");
		}
	}
	else if (pilihan == 4) {
		return 0;
	}
	else {
		printf("Pilihan tidak ada di daftar\n\n\n");
	}
	system("pause");
	system("cls");
	return main();
}