#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,3,5,7,10};

        v.erase(v.begin());       // O(1)
    cout<<v.size()<<endl;
    for(auto u:v) cout<<u<<" ";
    cout<<endl;

return 0;
}
