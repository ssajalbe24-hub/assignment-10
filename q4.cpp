#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; if(!(cin>>n)) return 0;
    vector<long long> a(n);
    unordered_map<long long,int> freq;
    for(int i=0;i<n;i++){ cin>>a[i]; freq[a[i]]++; }
    long long ans = LLONG_MIN;
    for(int i=0;i<n;i++) if(freq[a[i]]==1){ ans=a[i]; break; }
    if(ans==LLONG_MIN) cout<<"-1\n"; else cout<<ans<<"\n";
    return 0;
}
