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
	    int prev = -1, ans = 0, cnt = 0, n = s.length();
	    for(int i=0; i<n; i++) {
	        if(s[i] == '1') {
	            if(prev != -1) {
	                ans += cnt;
	            }
	            prev = i;
	            cnt = 0;
	        }
	        else {
	            cnt++;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}














