#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
int ktToanChan(int[], int);

int main()
{
	int a[100000], n;
	cout << "Nhap n: ";
	cin >> n;
	Input(a, n);
	int kq = ktToanChan(a, n);
	if (kq == 0)
		cout << "Mang khong toan chan!";
	else
		cout << "Mang toan chan!";
	return 0;
}
void Input(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int ktToanChan(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
	{
		if (a[n - 1] % 2 == 0)
			return 1;
		return 0;
	}
	if (a[n - 1] % 2 == 0 && ktToanChan(a, n - 1) == 1)
		return 1;
	return 0;
}