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
	ll n, cnt = 0, ans = 1;
	cin>>n;
	while(n > 0) {
	    int r = n%10;
	    if(r == 4 || r == 7) {
	        cnt++;
	    }
	    n /= 10;
	}
	if(cnt == 0) {
	    cout<<"NO\n";
	    return 0;
	}
	while(cnt > 0) {
	    int r = cnt%10;
	    if(r == 4 || r == 7) {
	        cnt /= 10;
	        continue;
	    }
	    else {
	        ans = 0;
	        break;
	    }
	}
	if(ans == 1) {
	    cout<<"YES\n";
	}
	else {
	    cout<<"NO\n";
	}
	return 0;
}














