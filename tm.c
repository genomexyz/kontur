#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main ()
{
	double tinsitu;
	double adbn_atas;
	double adbn_bawah;
	double hasil;

	printf("masukkan nilai insitu!\n");
	scanf("%lf", &tinsitu);
	printf("masukkan nilai adiabatik batas atas!\n");
	scanf("%lf", &adbn_atas);
	printf("masukkan nilai batas adiabatik bawah!\n");
	scanf("%lf", &adbn_bawah);
	hasil = ((adbn_atas - adbn_bawah) * (tinsitu - floor(abs(tinsitu))) + adbn_bawah) / 100;
	printf("hasilnya adalah : %lf\n", hasil);
	return 0;
}
