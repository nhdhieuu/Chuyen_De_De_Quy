#include <iostream>
using namespace std;
void MangCon(int[], int,int,int);
void find_subarrays(int arr[], int n, int start, int end);
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		find_subarrays(a, n, i, i + 1);
	}
	delete[]a;
	return 0;
}
void find_subarrays(int arr[], int n, int start, int end) {
	for (int i = start; i < end; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = start + 1; i < n; i++) {
		find_subarrays(arr, n, start, i);
	}
}
//void MangCon(int a[], int n,int left,int right)
//{
//	for (int i = left;i < right;i++)
//		cout << a[i] << " ";
//	cout << endl;
//	for (int i =left+1;i < n;i++)
//		MangCon(a, n,left,i);
//}