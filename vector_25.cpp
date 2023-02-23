#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,3,2,5,5,7,2,10,3,7,1,3};

       sort(v.begin(),v.end());
       int sz=unique(v.begin(),v.end())-v.begin();
       cout<<sz<<endl;
       unique(v.begin(),v.end());
       for(int i=0; i<sz; i++) cout<<v[i]<<" ";
       cout<<endl;

return 0;
}
