#include <stdio.h>

int main()
{
	int i, j, k; //variabel looping
	int angka[3]; //array menyimpan angka persamaan
	char operatr[2]; //array menyimpan operator
	int x0; //variabel menyimpan nilai X0
	int sebenarnya; //variabel menyimpan kunci jawaban
	
	printf("masukkan angka-angka persamaan: ");
	for(i=0;i<3;i++)
	{
		scanf("%d", &angka[i]);
	}
	
	printf("masukkan nilai X0: ");
	scanf("%d", &x0);
	
	printf("masukkan nilai sebenarnya: ");
	scanf("%d", &sebenarnya);
	
	return 0;
}
