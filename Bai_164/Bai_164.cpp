#include <iostream>
using namespace std;
void ThemBaoToan(int[], int&, int);
int main() {
	int n,x;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int* a = new int[n+1];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap x: ";
	cin >> x;
	ThemBaoToan(a, n, x);
	cout << "Mang sau khi da them x: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	delete[]a;
	return 0;
}
void ThemBaoToan(int a[], int& n, int x) {
	if (n == 0)
	{
		a[n++] = x;
		return;
	}
	if (a[n - 1] > x) {
		a[n] = a[n - 1];
		n--;
		ThemBaoToan(a, n , x);
		n++;
	}
	else {
		a[n] = x;		
		n++;
		return;
	}

}