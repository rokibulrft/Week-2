#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,set<int>> mp;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            mp[a].insert(i);
        }
        while(k--){
            int l,r;
            cin>>l>>r;
            if(mp.find(l)==mp.end() || mp.find(r)==mp.end()){
                cout<<"NO"<<endl;
            }else{
                int lm,rm;
                lm=*mp[l].begin();
                rm=*mp[r].rbegin();
                if(lm<rm) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
    return 0;
}
