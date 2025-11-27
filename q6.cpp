#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; if(!(cin>>n)) return 0;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    unordered_set<long long> s;
    bool dup=false;
    queue<int> q;
    if(n>0) q.push(0);
    while(!q.empty()){
        int idx=q.front(); q.pop();
        long long val=a[idx];
        if(s.find(val)!=s.end()){ dup=true; break; }
        s.insert(val);
        int l=2*idx+1, r=2*idx+2;
        if(l<n) q.push(l);
        if(r<n) q.push(r);
    }
    if(dup) cout<<"Duplicates Found\n"; else cout<<"No Duplicates\n";
    return 0;
}
