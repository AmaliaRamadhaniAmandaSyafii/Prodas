/* Amalia Ramadhani Amanda Syafi'i */
/* 20051397080 */
/* 2020B */

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	
	int jamKerja = 0, upah, total, sisa, sisa1;
	char nama[40], golongan;
	
	system ("color B");
	
	cout <<"================================================" << endl;
	cout << "	 PROGRAM HITUNG GAJI KARYAWAN\n ";
	cout << " 	     PT. SUMBER BANGUNAN\n"; 
	cout <<"================================================" << endl;
	cout << "Nama Karyawan : "; 
	cin >> nama;
	cout << "Pilih Golongan : " << endl; 
	cout << "Ketik a untuk Golongan A" << endl;
	cout << "Ketik b untuk Golongan B" << endl;
	cout << "Ketik c untuk Golongan C" << endl;
	cout << "Ketik d untuk Golongan D" << endl;
	cout << "Masukan Golongan : "; cin >> golongan; cout << endl;
	cout << "Jumlah Jam Kerja Selama Seminggu : "; cin >> jamKerja; cout << endl;
	switch(golongan){
	
	case 'a':
	{
		upah = 5000;
		break;
	}
	case 'b':
	{
		upah = 7000;
		break;
	}
	case 'c':
	{
		upah = 8000;
		break;
	}
	case 'd':
	{
		upah = 10000;
	}
}
	
	
	if (jamKerja > 48)
	{
		sisa = jamKerja - 48;
		sisa1 = upah * (jamKerja - sisa);
		total = 4000 * sisa;
		upah = sisa1 + total;
	}
	
	else
	{
		upah = upah * jamKerja;
	}
	
	cout <<"------------------------------------------------" <<endl;
	
	cout << "	 Hello " <<nama<<endl;
	cout << "Gaji Mingguan Anda Rp. " <<upah<<endl;
	cout <<endl<<"================================================" <<endl;
	return 0;
}
