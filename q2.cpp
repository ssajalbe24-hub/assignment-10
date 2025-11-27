#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int na; if(!(cin>>na)) return 0;
    unordered_set<long long> A;
    for(int i=0;i<na;i++){ long long x; cin>>x; A.insert(x); }
    int nb; cin>>nb;
    unordered_set<long long> out;
    vector<long long> order;
    for(int i=0;i<nb;i++){ long long x; cin>>x; if(A.count(x) && !out.count(x)){ out.insert(x); order.push_back(x); } }
    for(size_t i=0;i<order.size(); ++i){ if(i) cout<<" "; cout<<order[i]; }
    cout<<"\n";
    return 0;
}
