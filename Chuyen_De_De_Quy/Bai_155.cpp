#include <iostream>
using namespace std;

void ViTriLeTang(int[], int);
int main() {
	int n;
	int a[8] = { 1,9,7,3,1,5,7,0 };
	cout << "\nNhap vao n: ";
	cin >> n;
	cout << "\nSap tang cac gia tri tai vi tri le: ";
	ViTriLeTang(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << "  ";
	return 0;
}

void ViTriLeTang(int a[], int n) {
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++) {
		if (i % 2 != 0 && (n - 1) % 2 != 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	}
	ViTriLeTang(a, n - 1);
}