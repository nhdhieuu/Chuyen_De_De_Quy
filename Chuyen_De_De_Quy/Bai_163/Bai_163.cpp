#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
void Output(int[], int);
void ThemViTri(int[], int&, int, int);

int main()
{
	int a[100000], n, x, vt;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	cout << "Mang ban dau la: ";
	Output(a, n);
	cout << endl;
	cout << "Nhap gia tri can them: ";
	cin >> x;
	cout << "Nhap vi tri can them gia tri " << x << ": ";
	cin >> vt;
	ThemViTri(a, n, x, vt);
	cout << "Mang sau khi da them " << x << " vao vi tri " << vt << " la: ";
	Output(a, n);
	return 0;
}
void Input(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void Output(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(7);
}
void ThemViTri(int a[], int& n, int x, int vt)
{
	if (vt == n)
	{
		a[n] = x;
		n++;
		return;
	}
	swap(a[vt], x);
	ThemViTri(a, n, x, vt + 1);
}