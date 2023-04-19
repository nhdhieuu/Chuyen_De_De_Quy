#include <iostream>
#include <iomanip>
using namespace std;

int TinhAn(int);
int TinhBn(int);

int main() {
	int n;
	cout << "\nNhap vao n: ";
	cin >> n;
	
	int kq1 = TinhAn(n);
	int kq2 = TinhBn(n);
	cout << "\nKet qua cua bieu thuc la: " << kq1 << setw(6) << kq2;

	return 0;
}

int TinhAn(int n) {
	if (n == 1)
		return 2;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return (x * x + 2 * y * y);
}
int TinhBn(int n) {
	if (n == 1)
		return 1;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return (2 * x * y);
}