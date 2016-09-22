#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
	int i, j, k; //variabel looping
	float angka[3]; //array menyimpan angka persamaan
	float kiri; //variabel menyimpan angka yang dipindah ke kiri persamaan
	float pindah; //variabel menyimpan angka yang dipilih untuk dipindah ke kiri
	float x0; //variabel menyimpan nilai X0
	int sebenarnya; //variabel menyimpan kunci jawaban
	float jawaban; //variabel menyimpan jawaban hasil perhitungan
	
	printf("masukkan angka-angka persamaan: ");
	for(i=0;i<3;i++)
	{
		scanf("%f", &angka[i]);
	}
	
	printf("masukkan nilai X0: ");
	scanf("%f", &x0);
	
	printf("masukkan nilai sebenarnya: ");
	scanf("%d", &sebenarnya);

	//menyesuaikan tanda positif/negatif angka saat dipindahkan ke kiri persamaan
	kiri = angka[1]*-1;
		
	//indeks array setelah indeks ke-1 digeser 1 ke kiri
	angka[1] = angka[2];
	angka[2] = 0;
	
	//membagi persamaan dengan variabel kiri
	for(i=0;i<2;i++)
	{
		angka[i] = angka[i]/kiri;
	}
	
	angka[1] = angka[1]*-1;
	
	char lanjut = 'y'; //variabel menyimpan pilihan user untuk melanjutkan perhitungan atau tidak
	float error_true; //variabel menyimpan nilai perhitungan error true
	float error_approx; //variabel menyimpan nilai perhitungan error aproksimasi
	i = 1;
	
	while(lanjut != 'n')
	{
		jawaban = (angka[0] * (x0 * x0)) - angka[1]; //mencari akar persamaan
		
		printf("X%d = %f\n", i, jawaban);
		i++;
		
		//mencari error true
		error_true = ((sebenarnya * 1.0) - jawaban) / sebenarnya;
		if(error_true < 0)
		{
			error_true = error_true * -1; //error true dibuat selalu bernilai positif
		}
		printf("error true: %f\n", error_true*100);
		
		//mencari error aproksimasi
		error_approx = (jawaban - x0) / jawaban;
		if(error_approx < 0)
		{
			error_approx = error_approx * -1; //error aproksimasi dibuat selalu bernilai positif
		}
		printf("error aproksimasi: %f\n", error_approx*100);
		
		x0 = jawaban; //menyalin hasil perhitungan untuk dimasukkan ke rumus jika pencarian akar dilanjutkan
				
		getchar();
		
		printf("lanjut? y/n: ");
		scanf("%c", &lanjut);
		if(lanjut == 'n')
		{
			break;
		}
	}
	
	return 0;
}
