#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dpp(arr,val) memset(arr,val,sizeof(arr))
#define ll long long
#define ull unsigned long long
#define dd double
#define ld long double
#define PQ priority_queue
#define pii pair<int,int>
#define pll pair<ll,ll>
#define S second
#define F first
#define MP make_pair
#define endl "\n"
using namespace std;

ll calc(ll a1,ll an,ll n)
{
    return ((a1+an)*n)/2;
}
int main()
{
    IOS
    ll n;
    cin>>n;
    cout<<calc(1,n,n)<<" "<<((1+n)*n)/2<<endl;

    return 0;
}
