#include <iostream>
#include <iomanip>
using namespace std;

int ktCon(int a[], int b[], int m, int n, int vt) {
	for (int i = 0; i < n; i++)
		if (b[i] != a[vt + i])
			return 0;
	return 1;
}


int DemCon(int a[], int b[], int m, int n) {
	if (n == 0)
		return 1;
	int dem = 0;
	if (n > m)
		return 0;
	for (int vt = 0; vt <= m-n; vt++) 
	if (ktCon(a, b, m, n, vt) == 1) {
		dem++;
	}

	
	return  dem;
}

int main() {
	int a[8] = { 1,2,3,4,2,3,4 };
	int b[2] = { 2,3 };

	int m;
	cout << "\nNhap vao m: ";
	cin >> m;
	//for (int i = 0; i < n; i++)
		//cin >> a[i];
	int n;
	cout << "\nNhap vao n: ";
	cin >> n;

	cout << "\nDem so mang con b trong mang con a: ";
	int kq = DemCon(a, b, m, n);
	cout << kq;

	return 0;
}



