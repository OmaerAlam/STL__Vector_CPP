#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,10,3,5,5,7,1};

       int n= max_element(v.begin(),v.end())-v.begin();
       cout<<n<<endl;

return 0;
}
