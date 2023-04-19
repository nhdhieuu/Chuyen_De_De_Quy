#include <iostream>
using namespace std;

void DichPhai(int[], int n);
int main() {

	int n;
	int a[8] = { 1,9,7,3,1,5,7,0 };
	cout << "\nNhap vao n: ";
	cin >> n;
	cout << "\nDich phai xoay vong mang a: ";
	DichPhai(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}

void DichPhai(int a[], int n) {
	if (n <= 1)
		return;
	swap(a[n - 2], a[n - 1]);
	DichPhai(a, n - 1);
}