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
	    vector<string> ans;
	    int n = s.length();
	    for(int i=0; i<n; i++) {
	        if(s[i] != '0') {
	            ans.pb(s[i] + string(n - i - 1, '0'));
	        }
	    }
	    cout<<ans.size()<<"\n";
	    for(string &x: ans) {
	        cout<<x<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}














