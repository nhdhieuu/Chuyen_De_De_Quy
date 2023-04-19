#include<iostream>
using namespace std;
int TinhAn(int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Ket qua: " << TinhAn(n);
	return 0;
}
int TinhAn(int n) {
	if (n == 1)
		return 2;
	int s = TinhAn(n - 1);
	return s + 2 * n + 1;
}