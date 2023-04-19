#include <iostream>
#include <iomanip>
using namespace std;
void sort(float a[], int n) {
    for (int i=0;i<n;i++)
        for (int j = 0; j < n; j++)
        {
            if (a[i] > a[j])
                swap(a[i], a[j]);
        }
}
int GanNhat(float arr[], int n, float& a, float& b) {
    
    sort(arr,n);

    float lc = abs(arr[1] - arr[0]); 
    if (n == 2)
        return lc;
    for (int i = 1; i < n-1; i++) {
       /* for (int j = i+1; j < n; j++)*/ {
            float kc = abs(arr[i] - arr[n-1]);
            if (kc < lc) {
                lc = kc;
                a = arr[i];
                b = arr[n-1];
            }
        }
            
    }

    return GanNhat(arr,n-1,a,b);
}

int main() {
    float arr[] = { 3.2, 1.5, 4.7, 2.8, 5.6, 6.3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    float a, b;

    GanNhat(arr, n, a, b);
    cout << "Hai gia tri gan nhau nhat la: " << a << " va " << b << endl;

    return 0;
}
