#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i]; 
    }
    int distinct[n+1];
    set<int> s;
    for(int i=n;i>=1;i--){
        s.insert(arr[i]);
        distinct[i]=s.size();
    }
    while(m--){
        int a;
        cin>>a;
        cout<<distinct[a]<<endl;
    }
    return 0;
}