#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int result=1;
    for(int i=1;i<=n;i++){
        result *= i;
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    int fact = factorial(n);
    cout<<"factorial of "<<n<<" is"<< " "<<fact;
}