#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v;

       vector<int> a1={1,3,5,7,9};
       vector<int> a2={2,4,6,8,10};
       v.push_back(a1);
       v.push_back(a2);
       for(auto u:v){
        for(auto d:u) cout<<d<<" ";
        cout<<endl;
       }

return 0;
}
