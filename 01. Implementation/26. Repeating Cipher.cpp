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
	int n;
	cin>>n;
	string s, ans = "";
	int i = 0, cnt = 1;
	cin>>s;
	while(i < n) {
	    ans += s[i];
	    i += cnt;
	    cnt++;
	}
	cout<<ans;
	return 0;
}














