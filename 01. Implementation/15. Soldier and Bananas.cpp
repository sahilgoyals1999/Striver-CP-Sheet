#include <bits/stdc++.h>
typedef long long ll;
#define inf (long long)(LLONG_MAX)
#define mod (int)(1e9+7)
#define ff  first
#define ss  second
#define pb  push_back
#define FIO ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main() {
	FIO
	ll k, n, w;
	cin>>k>>n>>w;
	ll ans = (w * k)*(w + 1)/2 - n;
	if(ans < 0) cout<<"0";
	else cout<<ans;
	return 0;
}














