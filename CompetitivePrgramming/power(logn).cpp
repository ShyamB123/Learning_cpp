#include<bits/stdc++.h>
#define ll long long
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define mod 1000000007


using namespace std;

ll binexp(ll a,ll b)
{
    ll result = 1;
    while(b){
        if(b&1){
            result = (result*a)%mod;
        }
        a = (a*a)%mod;
        b>>=1;
    }
    return result;
}