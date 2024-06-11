#include<bits/stdc++.h>
using namespace std;

void insertElement(int a[], int &n, int pos, int element) {
    for(int i = n - 1; i >= pos - 1; i--) {
        a[i + 1] = a[i];
    }
    a[pos - 1] = element;
    n++;
}

int main() {
    int n, pos, element;
    cout << "Enter array size: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter array elements: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter position where you want to insert element: " << endl;
    cin >> pos;
    cout << "Enter element you want to insert: " << endl;
    cin >> element;
    
    insertElement(a, n, pos, element);
    
    cout << "Updated array elements are: " << endl;
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
