#include<iostream>
using namespace std;

void XoaViTri(float[], int&, int);

int main() {
	int n;
	float a[8] = { 1,9,7,3,1,5,7,0 };
	cout << "\nNhap vao n: ";
	cin >> n;
	int vt;
	cout << "\nNhap vao vi tri can xoa: ";
	cin >> vt;
	cout << "\nMang sau khi xoa la: ";
	XoaViTri(a, n, vt);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	return 0;
}

void XoaViTri(float a[], int& n, int vt) {
	if (vt == (n - 1))
	{
		n--;
		return;
	}
	a[vt] = a[vt + 1];
	XoaViTri(a, n, vt + 1);
}