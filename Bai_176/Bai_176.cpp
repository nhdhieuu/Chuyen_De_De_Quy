#include <iostream>
using namespace std;
void DuaVeCuoi(int[], int);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	DuaVeCuoi(a, n);
	cout << "Mang sau khi duoc xu ly: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	delete[]a;
	return 0;
}
void DuaVeCuoi(int a[], int n) {
	if (n == 0)
		return;
	if (a[n - 1] % 3 != 0) {
		DuaVeCuoi(a, n - 1);
		return;
	}
	for(int i = 0 ; i<= n - 2; i ++)
		if (a[i] % 3 != 0)
		{
			swap(a[n - 1], a[i]);
			break;
		}
	DuaVeCuoi(a, n - 1);
}