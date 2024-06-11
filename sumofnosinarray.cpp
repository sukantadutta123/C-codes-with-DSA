#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of elements in an array : -"<<endl;
    cin>>n;
     int sum=0 ;
    int arr[n];
    cout<<"Enter array Elements :- "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
         sum = sum + arr[i];
    }
    cout<<"sum is"<< sum;
    }