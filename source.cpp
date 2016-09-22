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
	
	//untuk debugging
//	printf("persamaan: %dX^2", angka[0]);
//	if(angka[1] < 0)
//	{
//		printf(" - %dX", angka[1]*-1);
//	}
//	if(angka[1] > 0)
//	{
//		printf(" + %dX", angka[1]);
//	}
//	if(angka[2] < 0)
//	{
//		printf(" - %d\n", angka[2]*-1);
//	}
//	if(angka[2] > 0)
//	{
//		printf(" + %d\n", angka[2]);
//	}
	
//	printf("masukkan angka yang dipindahkan ke kiri: ");
//	scanf("%f", &pindah);
	
	//jika angka yang dipindahkan berada di indeks ke-0 array
//	if(pindah == angka[0])
//	{
//		kiri = angka[0]*-1;
//		
//		//indeks array setelah indeks ke-0 digeser 1 ke kiri
//		angka[0] = angka[1];
//		angka[1] = angka[2];
//		angka[2] = 0;
//	}

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
		
	//untuk debugging
//	printf("angka di kiri: %f\n", kiri);
//	printf("persamaan sekarang: ");
//	for(i=0;i<2;i++)
//	{
//		printf("%f", angka[i]);
//	}
	
	angka[1] = angka[1]*-1;
	
	char lanjut = 'y'; //variabel menyimpan pilihan user untuk melanjutkan perhitungan atau tidak
	int iterasi = 0;
	float error_true;
	
	while(lanjut != 'n')
	{
		jawaban = (angka[0] * (x0 * x0)) - angka[1];
		
		//printf("%f x %f - %f\n", angka[0], pow(x0, 2), angka[1]);
		printf("X%d = %f\n", i+1, jawaban);
		error_true = ((sebenarnya * 1.0) - jawaban) / sebenarnya;
		if(error_true < 0)
		{
			error_true = error_true * -1;
		}
		printf("error true: %f\n", error_true*100);
//		if(iterasi > 0)
//		{
//			
//		}
		x0 = jawaban;
		//iterasi++;
		//printf("nilai x0 sekarang: %f\n", x0);
		
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
