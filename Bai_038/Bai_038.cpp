#include <iostream>
using namespace std;

int min(int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = min(n);
	cout << "Ket qua: " << kq;
	return 0;
}
int min(int n) {
	n = abs(n);
	if (n <= 9)
		return n;
	int lc = min(n / 10);
	int dv = n % 10;
	if (dv < lc)
		lc = dv;
	return lc;
}