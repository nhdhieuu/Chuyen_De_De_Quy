#include <iostream>
#include <iomanip>
using namespace std;

void Xuat(int[], int,int ,int);

int main() {
	int n,x,y;
	cout << "Nhap so phan tu: ";
	cin >> n;

	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap doan can xuat: " << endl;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Cac phan tu thoa dieu kien: ";
	Xuat(a, n,x,y);
	delete[]a;
	return 0;
}

void Xuat(int a[], int n,int x ,int y) {
	if (n == 0)
		return;
	Xuat(a, n - 1,x,y);
	if (a[n-1]>=x && a[n-1]<=y)
		cout << setw(3) << a[n - 1];
}
