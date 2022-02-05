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
	ll a, b;
	cin>>a>>b;
	if(b%a == 0) {
	    ll r = b/a, ans = 0;
	    while(r != 1) {
	        if(r%2 == 0) {
	            ans++;
	            r /= 2;
	        }
	        else if(r%3 == 0) {
	            ans++;
	            r /= 3;
	        }
	        else {
	            break;
	        }
	    }
	    if(r == 1) {
	        cout<<ans;
	    }
	    else {
	        cout<<"-1";
	    }
	}
	else {
	    cout<<"-1";
	}
	return 0;
}














