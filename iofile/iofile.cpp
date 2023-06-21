#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string baris;

	//membuka file dengan mode menulis;
	ofstream outfile;
	// menunjuk kesebuah nama file.

	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar " << endl;

	// unlimited loop untuk menulis
	while (true)
	{
		cout << "-";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		// Loop akan berhenti jika udah dimasukkan 4 karakter
		if (baris == "q")break;
		// menulis dan memasukan nilai dari 'baris' ke dalam file 
		outfile << baris << endl;

	}


}