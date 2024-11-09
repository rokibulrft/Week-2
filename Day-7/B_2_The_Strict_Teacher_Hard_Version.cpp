#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        vector<int> teacher(m);
        for(int i=0;i<m;i++){
            cin>>teacher[i];
        }
        sort(teacher.begin(),teacher.end());
        while(q--){
            int pos;
            cin>>pos;
            if(pos<teacher[0]){
                cout<<teacher[0]-1<<endl;
            }
            else if(pos>teacher[m-1]){
                cout<<n-teacher[m-1]<<endl;
            }else{
                auto it=lower_bound(teacher.begin(),teacher.end(),pos);
                auto jt=it;
                jt--;
                int left=*jt,right=*it;
                int mid=(left+right)/2;
                cout<<min(abs(mid-left),abs(mid-right))<<endl;
            }          
        }
    }
}