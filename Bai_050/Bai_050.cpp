#include <iostream>
using namespace std;
int Tinh(int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tinh(n);
	cout << "Ket qua: " << kq;
	return 0;
}
int Tinh(int n) {
	if (n == 0)
		return -1;
	if (n == 1)
		return 3;
	return 5 * Tinh(n - 1) - Tinh(n - 2);
}