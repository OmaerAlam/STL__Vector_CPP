#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={9,4,6,2,11,16,13};

    sort(v.begin()+1,v.begin()+5);
    for(auto u:v) cout<<u<<" ";
    cout<<endl;

    return 0;
}
