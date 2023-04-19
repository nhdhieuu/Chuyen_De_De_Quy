#include <iostream>
#include <iomanip>
using namespace std;

int ktCon(int[], int n, int vt, int l);
void LietKe(int[], int, int);
void LietKe(int[], int);
int main() {
	int a[100];
	

	int n;
	cout << "\nNhap vao n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "\nLiet ke cac mang con tang: ";
	LietKe(a, n);

	return 0;
}

int ktCon(int a[], int n, int vt, int l) {
	if (l == 1)
		return 1;
	if (a[vt + l - 2] > a[vt + l - 1])
		return 0;

	return 	ktCon(a, n, vt, l - 1);
}


void LietKe(int a[], int n, int l) {
	
	
	if (l== 0)
		return;
	for (int vt = 0; vt <= n - l; vt++) {
		if (ktCon(a, n, vt, l ) == 1) {
			for (int i = 0; i < l; i++)
				cout << setw(8) << a[vt + i];
			cout << "\n";
		}
	}
	LietKe(a, n, l - 1);
}

 void LietKe(int a[], int n) {
	 LietKe(a, n, n);
}