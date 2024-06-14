#include<iostream>
using namespace std;
int main(){
    int n;
    float c;
    float f;
    cout<<"Enter no of temperatures you want to convert"<<endl;
    cin>>n;
    for(int i=1;i<n;i++){
        
        cout<<"your temperature in farenheit"<<endl;
        cin>>f;
         c = ((f-32)*5)/9;
         cout<<"your temperatures is:- \n"<<c<<endl;
    }
    return 0;
    
    }