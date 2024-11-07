#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,customerNo=1;
    cin>>n;
    set<pair<int,int>> s;
multiset<pair<int,int>> ml;
    vector<int> v;
    while(n--){
        int type;
        cin>>type;
        if(type==1){
            int money;
            cin>>money;
            s.insert({customerNo,money});
            ml.insert({money,-customerNo});
            customerNo++;
        }else if(type==2){
            int pos=s.begin()->first;
            int money=s.begin()->second;
            v.push_back(pos);
            s.erase({s.begin()});
            ml.erase({money,-pos});
        }else{
            int pos=-ml.rbegin()->second;
            int money=ml.rbegin()->first;
            v.push_back(pos);
            s.erase({pos,money});
            ml.erase({money,-pos});
        } 
    }
    for(auto x:v){
            cout<<x<<" ";
    }
}