#include <iostream>
using namespace std;

void MergeSort(int*, int);
void MergeSort(int*, int, int);
void Merge(int*, int,int, int);

int main() {
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i <<"]: ";
		cin >> a[i];
	}
	MergeSort(a, n);
	cout << "Mang sau khi duoc sap xep: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}
void MergeSort(int* a, int n) {
	MergeSort(a, 0, n - 1);
}
void MergeSort(int* a, int left, int right) {
	if(left < right) {
		int mid = left + (right - left) / 2;
		MergeSort(a, left, mid);
		MergeSort(a, mid + 1, right);
		Merge(a, left, mid, right);
	}
}
void Merge(int* a, int left, int mid, int right) {
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;
	int* L = new int[n1];
	int* R = new int[n2];
	for (int i = 0; i < n1; i++)
		L[i] = a[left + i];
	for (int j = 0; j < n2; j++)
		R[j] = a[mid + 1 + j];
	i = j = 0;
	k = left;
	while (i < n1 && j < n2)
		a[k++] = L[i] <= R[j] ? L[i++] : R[j++];
	while (i < n1)
		a[k++] = L[i++];
	while (j < n2)
		a[k++] = R[j++];
	delete[]R;
	delete[]L;
}