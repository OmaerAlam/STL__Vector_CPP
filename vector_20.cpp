#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,3,5,7,10};

    cout<<v.back()<<endl;
    v.pop_back();       // O(1)
    cout<<v.back()<<endl;

return 0;
}
