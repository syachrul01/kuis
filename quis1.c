#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int n = 0; // Membuat variabel integer n dan di inisialisasikan 0
	char temp[500]; // membuat array of char

	FILE *fdata; // membuat fdata
	fdata = fopen("text.txt", "r"); // membuka & membaca file text.txt

	int status = 0; // Membuat variabel integer status dan di inisialisasikan 0

	// proses berjalan selama status nya 0 
	do{

		fscanf(fdata, "%s", temp); // Menyalin kata yg ada di file text ke temp
		if(strcmp(temp, "##") == 0){ // Jika kata yg disalinnya adalah "##"
			status = 1; // status nya menjadi 1
		}
		else{ // jika tidak
			n++; // Variabel integer n bertambah untuk menghitung banyaknya kata
		}

	}while(status == 0);

	// Menampilkan 
	printf("Jumlah kata adalah %d \n", n);
	fclose(fdata); // Menutup file
	
return 0;
}
