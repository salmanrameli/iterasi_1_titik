#include <stdio.h>

int main()
{
	int i, j, k; //variabel looping
	float angka[3]; //array menyimpan angka persamaan
	float kiri; //variabel menyimpan angka yang dipindah ke kiri persamaan
	float pindah; //variabel menyimpan angka yang dipilih untuk dipindah ke kiri
	//char operatr[2]; //array menyimpan operator
	int x0; //variabel menyimpan nilai X0
	int sebenarnya; //variabel menyimpan kunci jawaban
	
	printf("masukkan angka-angka persamaan: ");
	for(i=0;i<3;i++)
	{
		scanf("%f", &angka[i]);
	}
	
	printf("masukkan nilai X0: ");
	scanf("%d", &x0);
	
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

	kiri = angka[1]*-1;
		
	//indeks array setelah indeks ke-1 digeser 1 ke kiri
	angka[1] = angka[2];
	angka[2] = 0;
	
	//untuk debugging
	printf("angka di kiri: %f\n", kiri);
	printf("persamaan sekarang: ");
	for(i=0;i<2;i++)
	{
		printf("%f", angka[i]);
	}

	
	
	return 0;
}
