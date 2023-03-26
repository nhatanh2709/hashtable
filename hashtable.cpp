#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD=1e5+7;
const int base=31;
vector<string>block[MOD+10];
int get_hash(string s)
{
    ll ans=0;
    for(char c:s)
    {
        int value=c-'0';
        ans=(ans*base+value)%MOD;
    }
    return ans;
}
void find_string(string s)
{
    int value=get_hash(s);
    bool ok=true;
    for(string need:block[value])
    {
        if(need==s)ok=false;
    }
    if(ok)block[value].push_back(s);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        find_string(s);
    }
}
