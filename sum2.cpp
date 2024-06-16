#include<iostream>
using namespace std;
int main(){
int i,n;
int sum = 0;
cout<<"enter your number:-"<<endl;
cin>>n;
for(i=0;i<n;i=i+2){
    sum=sum+i;
}
cout<<sum<<endl;
}
