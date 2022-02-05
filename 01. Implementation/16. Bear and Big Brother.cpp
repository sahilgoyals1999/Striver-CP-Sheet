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
	int a, b;
	cin>>a>>b;
	float ans = log(1.0*b/a) / log(3.0/2);
	if(ceil(ans) == float(ans)) {
	    cout<<ans + 1;
	}
	else {
	    cout<<ceil(ans);
	}
	return 0;
}














