#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukkan Nama File";
	cin >> NamaFile;

	//membuka file dengan mode menulis;
	ofstream outfile;
	// menunjuk kesebuah nama file.
	outfile.open(NamaFile+".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar " << endl;



}