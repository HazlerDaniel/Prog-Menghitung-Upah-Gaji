#include<stdio.h>
#define u 5000.00

main() {
	
	int jam,Hasil;
	printf("program menghitung upah gaji karyawan\n");
	printf("masukan jumlah jam:",jam);
	scanf("%i",&jam);
	
	Hasil = jam*u;
	printf("Hasil upah adalah : %i rupiah",Hasil);
}

