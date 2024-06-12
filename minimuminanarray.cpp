#include<bits/stdc++.h>
using namespace std;
int isMaximum(int a[],int &n, int max){
    max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<max){
            max=a[i];
        }
    }
    return max;
}
int main(){
    int n,max;
    cout<<"Enter Array Size  : -"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter Array Elements : - "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m=isMaximum(a,n,max);
    cout<<"Maximum of the array is : -"<<" "<<m<<endl;
}