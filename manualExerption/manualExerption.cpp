#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0.5; // Melemparkan sebuah integer maka
		cout << "Pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan dieksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		//Jika selalu integer maka block ini akan dieksekusi
		cout << "Default pengecualian diexsekusi" << endl;
	}
	return 0;
}