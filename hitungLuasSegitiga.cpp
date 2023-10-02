#include <iostream>
using namespace std;
 
int main(){
	// tampilan untuk memberi tau judul program
	cout << "$$  Program C++ Menghitung Luas Segitiga  $$" << endl;
  	cout << "============================================" << endl;
  	cout << endl;
	
	//	deklarasi variabel
	float luas, alas, tinggi;
	
	// input nilai alas dari user
	cout << "Masukan alas segitiga: ";
	cin >> alas;
	
	// input nilai tinggi dari user
	cout << "Masukan tinggi segitiga: ";
	cin >> tinggi;
	
	// hitung rumus luas segitiga
	luas = 0.5 * alas * tinggi;
	
	// menampilkan hasil perhitungan
	cout << "Luas Segitiga adalah: " << luas << endl;
	
	// menutup main() dan mengakhiri program yang sudah ditulis
	return 0;
}


