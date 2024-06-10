#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return false;
        }
    }
     return true;
}
int main(){
    int n;
    cin>>n;
        if(prime(n)){ 
            cout<<n<<" "<<"is prime";
        } else { 
            cout<<n<<" "<<"is not prime";
        }
}