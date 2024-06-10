#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int n,int r,int sum){
    while(n!=0){
    r=n%10;     
     sum=sum+r;
    n=n/10; 
    } 
    return sum; 
}
int main(){
    int n,r;
    cin>>n; 
    int sum=0;
       
    int s = sumOfDigits(n,r,sum);
    cout<<"Sum is "<<s;
}