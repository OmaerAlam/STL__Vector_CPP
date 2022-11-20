//Decending sorted by using rbegin and rend function
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={100,5,7,30,101,2,3,4,56,25,36,26,1005,29};
    sort(v.rbegin(),v.rend());// sort build in function...
    for(auto u:v)
    {
        cout<<u<< " ";
    }
return 0;
}
