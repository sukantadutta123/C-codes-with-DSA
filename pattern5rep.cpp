#include<iostream>
using namespace std;
int main(){
    int n=1;
for(int i=1;i<5;i++){
    for(int j=1;j<=7;j++){
        if(j==5-i && j==3+i){
            cout<<"*";
        }else{
            cout<<" ";
            
        }
    }
    cout<<"\n";
}
}