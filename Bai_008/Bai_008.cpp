#include <iostream>
using namespace std;

int GiaiThua(int);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = GiaiThua(n);
	cout << "Ket qua: " << kq;
	return 0;
}
int GiaiThua(int n) {
	if (n == 0)
		return 1;
	return GiaiThua(n - 1) * n;
}