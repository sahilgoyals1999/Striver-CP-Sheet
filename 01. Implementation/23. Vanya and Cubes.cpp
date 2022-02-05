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
	int n, ans = 0, i = 1, prev = 0;
	cin>>n;
	while(n >= prev + i) {
	    n -= (prev + i);
	    prev += i;
	    i++;
	    ans++;
	}
	cout<<ans;
	return 0;
}














