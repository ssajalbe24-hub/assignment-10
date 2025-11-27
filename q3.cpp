#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; if(!(cin>>n)) return 0;
    vector<long long> a(n);
    unordered_map<long long,int> freq;
    vector<long long> order;
    for(int i=0;i<n;i++){ cin>>a[i]; if(!freq.count(a[i])) order.push_back(a[i]); freq[a[i]]++; }
    for(long long v: order){
        cout<<v<<" -> "<<freq[v]<<" "<<(freq[v]==1?"time":"times")<<"\n";
    }
    return 0;
}
