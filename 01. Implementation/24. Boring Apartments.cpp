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
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    int n = s.length();
	    int ans = (s[0] - '0' - 1) * 10;
	    while(n > 0) {
	        ans += n;
	        n--;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}














