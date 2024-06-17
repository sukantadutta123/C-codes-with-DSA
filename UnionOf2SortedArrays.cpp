#include<bits/stdc++.h>
using namespace std;
    vector <int> sortedArray(vector <int> &a1,int n1,vector <int> &a2,int n2){
        
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(a1[i]);
    }

    for(int i=0;i<n2;i++){
        st.insert(a2[i]);
    }
    vector <int> result(st.begin(),st.end());
    return result;
}
int main(){
    int n1,n2;
    vector <int> a1(n1);
    
    cout<<"Enter Array -> 1 Size : "<<endl;
    cin>>n1;
    cout<<"Enter Array 1 Elements"<<endl;
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    cout<<"Enter Array -> 2 size :"<<endl;
    cin>>n2;
    vector <int> a2(n2);
    cout<<"Enter Array 2 Elements"<<endl;
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
     vector<int> result = sortedArray(a1, n1, a2, n2);
    
    cout << "Merged and Sorted Array without Duplicates: " << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;

}