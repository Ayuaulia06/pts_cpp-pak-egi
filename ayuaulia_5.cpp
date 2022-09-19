#include <iostream>
using namespace std;

int main(){
	int kehadiran, tugas, uts, uas;
	int hitung, nilai_akhir;
	cout << "kehadiran = ";
	cin >> kehadiran;
	cout << "tugas = ";
	cin >> tugas;
	cout << "UTS = ";
	cin >> uts;
	cout << "UAS = ";
	cin >> uas;
	hitung = kehadiran + tugas + uts + uas;
	nilai_akhir = hitung / 4;
	cout << "hasil akhir : " << nilai_akhir << endl;
	return 0;
}