#include<bits/stdc++.h>
using namespace std;
int ispalindrome(int n){
    int sum=0;
    while(n!=0){
    int r = n%10;
    int sum = sum*10+r;
    n=n/10;
    }
    return sum;
   
}
int main(){
    int n,sum,r;
    cin>>n;
    int f=n;
    int p=ispalindrome(n);
     if(f==p){
        cout<<"Palindrome number";
    } else{
        cout<<"Not a palindrome number";
    }
    
}