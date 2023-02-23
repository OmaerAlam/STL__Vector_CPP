#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={9,4,6,2,11,16,13};

    reverse(v.begin(),v.end());
    for(auto u:v) cout<<u<<" ";
    cout<<endl;

    return 0;
}
