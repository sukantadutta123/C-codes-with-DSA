#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max,s_max;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array Elements : - "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    s_max=-1;
    max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]> max){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>s_max && a[i]<max){
            s_max=a[i];
        }
    }    
        cout<<"Second largest element in Array : - "<<endl;
        cout<<" "<<s_max<<endl;
        cout<<"Largest element in Array : - "<<endl;
        cout<<" "<<max<<endl;
    
}