#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,10,3,5,5,7,1};

       vector<int> :: iterator it=max_element(v.begin()+2,v.end()+4);
       cout<<*it<<endl;

return 0;
}
