//This Works Only If the Duplicate Element's Occurrence Is EVEN.

#include<bits/stdc++.h>
using namespace std;
int singleOccurrence(vector <int> a,int n){
    int xor1 = 0;
    for(int i=0;i<n;i++){
        xor1=xor1^a[i];
    }
    return xor1;
}
int main() {
    int n;
    cout << "Enter Array Size: " << endl;
    cin >> n;
    vector<int> a(n);
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = singleOccurrence(a, n);
    if (result != -1) {
        cout << "The element that occurs only once is: " << result << endl;
    } else {
        cout << "No element occurs exactly once in the array." << endl;
    }

    return 0;
}