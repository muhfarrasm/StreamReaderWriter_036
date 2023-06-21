#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan
#include <array>
//Untuk obyek array yang akan kita gunakan
using namespace std;

int main()
{
	cout << "Awal Program" << endl; // penanda 1:..
	try {
		array<int, 3> data = { 3, 5, 7 };
		cout << data.at(5) << endl;
	}
}