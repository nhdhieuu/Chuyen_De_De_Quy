#include <iostream>
using namespace std;
void DuaVeCuoi(int[], int);
bool ktNguyenTo(int);
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
bool ktNguyenTo(int n)
{
	for (int i = 2;i <= sqrt(n);i++)
		if (n % i == 0)
			return 0;
	return 1;
}
void DuaVeCuoi(int a[], int n) {
	if (n == 0)
		return;
	if (ktNguyenTo(a[n-1])==1) {
		DuaVeCuoi(a, n - 1);
		return;
	}
	for (int i = 0; i <= n - 2; i++)
		if (ktNguyenTo(a[n-1]))
		{
			swap(a[n - 1], a[i]);
			break;
		}
	DuaVeCuoi(a, n - 1);
}