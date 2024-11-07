#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            mp[a]++;
        }
        priority_queue<int> pq;
        for(auto i:mp){
            pq.push(i.second);
        }
        while(!pq.empty()){
            if(pq.size()<2) break;
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            x--,y--;
            if(x>0) pq.push(x);
            if(y>0) pq.push(y);
        }
        int result=0;
        while(!pq.empty()){
            result+=pq.top();
            pq.pop();
        }
        cout<<result<<"\n";
    }
    return 0;
}