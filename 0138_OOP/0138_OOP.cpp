#include <iostream>
using namespace std;

class mahasiswa {
public :
	string nama;
	int umur;
	string jurusan;

	void input() {
		cout << "Nama = " << nama << endl;
		cout << "Umur = " << umur << endl;
		cout << "jurusan = " << jurusan << endl;
	}
};

class MataKuliah {
private :
	string kodeMK;
	string namaMK;
	int sks;
public:
	void input() {
		cout << "kode MK =";
		cin >> kodeMK;
		cout << "Nama MK =";
		cin >> namaMK;
		cout << "SKS =";
		cin >> sks;
	}

	void ouput() {
		cout << "kode MK = " << kodeMK << endl;
		cout << "Nama MK = " << namaMK << endl;
		cout << "SKS : " << sks << endl;


	}
};