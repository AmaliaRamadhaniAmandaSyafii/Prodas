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
	
	char ket [15], yn;
	int  kode, alas,tinggi, miring;
	float x,b,c;
	
	Awal :
	
	cout <<"================================================" << endl;
	cout <<"	 PROGRAM HITUNG SEGITIGA SIKU-SIKU\n "; 
	cout <<"================================================" << endl;
	cout << "Menu : "<< endl;
	cout << "1. Hitung Panjang Sisi Miring " << endl;
	cout << "2. Hitung Luas" << endl;
	cout << "3. Hitung Keliling" << endl;
	cout << "4. Keluar Program" <<endl;
	cout << "Pilih [1/2/3/4] : ";
	kode=getche(); 
	switch (kode)
	
	
	{
	case '1': 
	{
		cout << "\n--------------------------------------------------------" <<endl;
		cout << "  ~ Menghitung Panjang Sisi Miring Segitiga Siku-Siku ~" <<endl;
		cout << "\n" <<endl;
		cout << "Masukkan Alas : "; cin>>alas;
		cout << "Masukan Tinggi : "; cin>>tinggi;
		x = sqrt((alas*alas)+(tinggi*tinggi));
		cout <<"\n" <<endl;
		cout << "Jadi Panjang Sisi Miring adalah :  "<<x<<endl;
		cout << "---------------------------------------------------------" <<endl;
		cout << "Apakah Anda Ingin Kembali ke Menu Awal? (Y/N) = "; cin>>yn;
		if(yn=='y') goto Awal; if(yn=='n') goto Akhir;
		break;
	}
	
	
	case '2' : 
	{
		cout <<"\n--------------------------------------------" <<endl;
		cout << "  ~ Menghitung Luas Segitiga Siku-Siku ~" <<endl;
		cout <<"\n" <<endl;
		cout << "Masukkan Alas : "; cin>>alas;
		cout << "Masukan Tinggi : "; cin>>tinggi;
		b= (alas*tinggi)/2;
		cout <<"\n" <<endl;
		cout << "Jadi Luasnya adalah : "<<b<<endl;
		cout <<"\n--------------------------------------------" <<endl;
		cout << "Apakah Anda Ingin Kembali ke Menu Awal? (Y/N) = "; cin>>yn;
		if(yn=='y') goto Awal; if(yn=='n') goto Akhir;
		
		break;
	}
	
	
	case '3' : 
	{
		cout <<"\n--------------------------------------------" <<endl;
		cout << "\n	~ Menghitung Keliling Segitiga Siku-Siku ~" <<endl;
		cout <<"\n" <<endl;
		cout << " Masukkan Alas : "; cin>>alas;
		cout << " Masukkan Tinggi : "; cin>>tinggi;
		cout << " Masukkan Sisi Miring: "; cin>>miring;
		c= alas+tinggi+miring;
		cout <<"\n" <<endl;
		cout << "Jadi Kelilingnya adalah: "<<c<<endl;
		cout <<"\n--------------------------------------------" <<endl;
		cout << "Apakah Anda Ingin Kembali ke Menu Awal? (Y/N) = "; cin>>yn;
		if(yn=='y') goto Awal; if(yn=='n') goto Akhir;
		break;
	}
	
	case '4' : 
	{
		cout << "\nKELUAR PROGRAM" <<endl;
		break;
	}
	Akhir :
		cout <<"================================================" <<endl;
		cout << "\n" <<endl;
		cout <<"Terima Kasih Telah Menggunakan Program Ini" <<endl;
	
		
	
	return 0;
}
}
	
