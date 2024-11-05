#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<pair<int,string>> v;
        for(int i=0;i<n;i++){
            int m;
            string s;
            cin>>m>>s;
            v.push_back({m,s});
        }
        int k=0;
        for(auto it:v){
            for(char ch:it.second){
                if(ch=='D'){
                    arr[k]+=1;
                    if(arr[k]==10){
                        arr[k]=0;
                    }
                }
                else if(ch=='U'){
                    arr[k]-=1;
                    if(arr[k]==-1){
                        arr[k]=9;
                    }
                }
            }
            k++;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        } 
        cout<<endl; 
    }
}