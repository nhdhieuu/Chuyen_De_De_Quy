#include <iostream>
#include <iomanip>
using namespace std;

int ChuSoDau(int);
void LietKe(int[], int);
void Input(int[], int&);


int main()
{
	int a[100000], n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	cout << "Cac gia tri co chu so dau tien la chu so le la: ";
	LietKe(a, n);
	return 0;
}
int ChuSoDau(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt /= 10;
	return dt;
}
void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 != 0)
		cout << setw(6) << a[n - 1];
}
void Input(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
