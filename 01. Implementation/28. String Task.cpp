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
	string s, ans = "";
	cin>>s;
	int n = s.length();
	for(int i=0; i<n; i++) {
	    char c = s[i];
	    if(c >= 'A' && c <= 'Z') {
	        c += 32;
	    }
	    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
	        continue;
	    }
	    ans += ".";
	    ans += c;
	}
	cout<<ans;
	return 0;
}














