#include<bits/stdc++.h>
using namespace std;

vector<int> IntersectionOfArray(vector<int> a1, int n1, vector<int> a2, int n2) {
    int i = 0;        // {1 2 3 4 5}
    int j = 0;        // {4 5 6 7 8}
    vector<int> interArr;
    while (i < n1 && j < n2) {
        if (a1[i] < a2[j]) {
            i++;
        } else if (a1[i] > a2[j]) {
            j++;
        } else {  // a1[i] == a2[j]
            if (interArr.empty() || interArr.back() != a1[i]) {
                interArr.push_back(a1[i]);
            }
            i++;
            j++;
        }
    }
    return interArr;
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

    vector<int> interArr = IntersectionOfArray(a1, n1, a2, n2);

    cout << "Intersection of Arrays: " << endl;
    for (int i = 0; i < interArr.size(); i++) {
        cout << interArr[i] << " ";
    }
    cout << endl;

    return 0;
}
