#include <iostream>
using namespace std;

class BangunDatar {
private:
	float panjang, lebar;
public:
	float luas;

	void input() {
		cout << "panjang : ";
		cin >> panjang;
		cout << "Lebar :";
		cin >> lebar;
	}

	float HitungLuas() {
		return panjang * lebar;
	}

	void display() {
		cout << "panjangnya = " << panjang << endl;
		cout << "lebarnya = " << lebar << endl;
		cout << "luasnya = " << HitungLuas() << endl;
	}
};

int main() {
	BangunDatar obj;
	obj.input();
	obj.display();
	return 0;
}