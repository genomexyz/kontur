#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main ()
{
	double isotherm;
	double bts_atas;
	double bts_bawah;
	double jarak;
	double hasil;

	printf("masukkan nilai isotherm!\n");
	scanf("%lf", &isotherm);
	printf("masukkan nilai batas atas!\n");
	scanf("%lf", &bts_atas);
	printf("masukkan nilai batas bawah!\n");
	scanf("%lf", &bts_bawah);
	printf("masukkan nilai jarak awal!\n");
	scanf("%lf", &jarak);
	hasil = (isotherm - bts_bawah) * jarak / (bts_atas - bts_bawah);
	printf("hasilnya adalah : %lf\n", hasil);
	return 0;
}
