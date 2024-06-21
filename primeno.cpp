#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int count=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;

        }
    }
        if(count==2){
            cout<<"prime no";
        }else{
            cout<<"not prime no";
        }
    

   }

    