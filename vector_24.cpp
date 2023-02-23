#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,3,5,7,10};

        reverse(v.begin(),v.end());
    while(!v.empty()){
        cout<<v.back()<<endl;
        v.pop_back();
    }

return 0;
}
