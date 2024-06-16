#include<bits/stdc++.h>
using namespace std;
vector <int> MovingZeroes(vector <int> &a,int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    return a;
}
int main(){
    int n;
    cout<<"Enter Array Size:- "<<endl;
    cin>>n;
    vector <int> a(n);
    cout<<"Enter Array Elements : -"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    MovingZeroes(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "; 
    }
}