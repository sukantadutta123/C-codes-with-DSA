#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> &a1, int n1, vector<int> &a2, int n2) {
    int i = 0;
    int j = 0;
    vector<int> unionarr;
    while (i < n1 && j < n2) {
        if (a1[i] <= a2[j]) {
            if (unionarr.size() == 0 || unionarr.back() != a1[i]) {
                unionarr.push_back(a1[i]);
            }
            i++;
        } else {
            if (unionarr.size() == 0 || unionarr.back() != a2[j]) {
                unionarr.push_back(a2[j]);
            }
            j++;
        }
    }
    while (i < n1) {
        if (unionarr.size() == 0 || unionarr.back() != a1[i]) {
            unionarr.push_back(a1[i]);
        }
        i++;
    }
    while (j < n2) {
        if (unionarr.size() == 0 || unionarr.back() != a2[j]) {
            unionarr.push_back(a2[j]);
        }
        j++;
    }
    return unionarr;
}

int main() {
    int n1, n2;

    cout << "Enter Array -> 1 Size: " << endl;
    cin >> n1;
    vector<int> a1(n1);  // Initialize after reading n1
    cout << "Enter Array 1 Elements: " << endl;
    for (int i = 0; i < n1; i++) {
        cin >> a1[i];
    }

    cout << "Enter Array -> 2 Size: " << endl;
    cin >> n2;
    vector<int> a2(n2);  // Initialize after reading n2
    cout << "Enter Array 2 Elements: " << endl;
    for (int i = 0; i < n2; i++) {
        cin >> a2[i];
    }

    vector<int> unionarr = sortedArray(a1, n1, a2, n2);

    cout << "Merged and Sorted Array without Duplicates: " << endl;
    for (int i = 0; i < unionarr.size(); i++) {
        cout << unionarr[i] << " ";
    }
    cout << endl;

    return 0;
}
