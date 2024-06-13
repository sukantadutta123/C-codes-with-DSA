#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter Array Size :-"<<endl;
    cin>>n;
    vector <int> a(n);
    cout<<"Enter Array Elements : - "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    temp = a[0];
    // 1 2 3 4 5
    // 2 3 4 5 1
    for(int i=1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=temp;
    cout<<"ARRAY IS:-"<<endl;
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}