#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        bool ans_found=false;
        int l=1,r=n,min=1,max=n;
        while(l<=r){
            if((v[l]==max && v[r]==min) || (v[l]==min && v[r]==max)){
                l++,r--;
                max--,min++;
            }else if(v[l]==min){
                l++,min++;
            }else if(v[l]==max){
                l++,max--;
            }else if(v[r]==max){
                r--,max--;
            }else if(v[r]==min){
                r--,min++;
            }else{
                ans_found=true;
            }
            if(ans_found){
                cout<<l<<" "<<r<<endl;
                break;
            }   
        }
        if(!ans_found) cout<<"-1"<<endl;
    }
}