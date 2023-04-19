#include <iostream>
using namespace std;

int ktBang(int[], int n);
int main() {
	int n;
	int a[8] = { 1,1,1,1,1,1,1,0 };
	cout << "\nNhap vao n: ";
	cin >> n;
	int kq = ktBang(a, n);
	cout << "\nKiem tra mang co toan chu so bang nhau khong: " << kq;

	return 0;
}

int ktBang(int a[], int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (a[n - 2] == a[n - 1] && ktBang(a, n - 1) == 1)
		return 1;
	return 0;
}