#include<iostream>
using namespace std;

float TongChuSo(int);

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Ket qua la:" << TongChuSo(n);
	return 1;
}
float TongChuSo(int n)
{
	n = abs(n);
	if (n == 0)
		return 0;
	int s = TongChuSo(n / 10);
	int dv = n % 10;
	return s + dv;

}