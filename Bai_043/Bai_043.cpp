#include <iostream>
using namespace std;

int ktTang(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (ktTang(n) == 1)
		cout << "So " << n << " co cac chu so tang dan tu trai sang phai.";
	else
		cout << "So " << n << " khong co cac chu so tang dan tu trai sang phai.";
	return 0;
}
int ktTang(int n)
{
	n = abs(n);
	if (n <= 9)
		return 1;
	int dv = n % 10;
	int hc = (n / 10) % 10;
	if (ktTang(n / 10) && hc <= dv)
		return 1;
	return 0;
}