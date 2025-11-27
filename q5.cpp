#include <bits/stdc++.h>
using namespace std;
struct Node{ long long v; Node* next; Node(long long x):v(x),next(NULL){} };
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; if(!(cin>>n)) return 0;
    vector<Node*> nodes;
    for(int i=0;i<n;i++){ long long x; cin>>x; nodes.push_back(new Node(x)); if(i>0) nodes[i-1]->next=nodes[i]; }
    int pos; cin>>pos;
    if(pos>=0 && pos<n) nodes.back()->next = nodes[pos];
    unordered_set<Node*> s;
    Node* cur = n? nodes[0] : NULL;
    bool hasCycle=false;
    while(cur){
        if(s.count(cur)){ hasCycle=true; break; }
        s.insert(cur);
        cur=cur->next;
    }
    cout<<(hasCycle?"true":"false")<<"\n";
    return 0;
}
