#include<iostream>
using namespace std;

float Tinh(int);

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Ket qua la:" << Tinh(n);
	return 1;
}
float Tinh(int n)
{
	if (n == 0)
		return 0;
	return pow((n + Tinh(n - 1)), (float)1 / (n + 1));

}