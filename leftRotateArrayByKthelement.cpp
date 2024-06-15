#include<bits/stdc++.h>
using namespace std;
void Rotate(vector <int> &a,int n,int d){
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=a[i];
    }
    for(int i=d;i<n;i++){
        a[i-d]=a[i];
    }
    for(int i=n-d;i<n;i++){
        a[i]=temp[i-(n-d)];
    }

}
int main(){
    int n,d;
    cout<<"Enter Array Size : -"<<endl;
    cin>>n;
    vector <int> a(n);
    cout<<"Enter Array Elements : -"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Upto Hopw many Places you want to rotate : -"<<endl;
    cin>>d;
    Rotate(a,n,d);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }    
}